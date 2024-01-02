import os
import sys
import time
import argparse
import random
import torch

import rclpy
from rclpy.qos import qos_profile_sensor_data
from rclpy.node import Node

import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from ultralytics import YOLO

from msg_interfaces.msg import BoundingBox, BoundingBoxes
 
 
def parse_argument():
    parser = argparse.ArgumentParser(description='detect image from topic (gazebo)')
    parser.add_argument('-model', type=str, default='/home/guoxuan/lab/bs/yolo_ros/src/yolov8/weight/v8-train7/best.pt')
    parser.add_argument('-device', type=str, default='cpu')
    parser.add_argument('-conf_threshold', type=float, default=0.5)
    parser.add_argument('-iou_threshold', type=float, default=0.7)
    parser.add_argument('-enable', type=bool, default=True)
    parser.add_argument('-input_image_topic', type=str, default='camera1/image_raw')
    parser.add_argument('-show_inference_image', type=bool, default=True)
    parser.add_argument('-save', type=bool, default=False)
 
    args, unknown = parser.parse_known_args()
    return args
 
 
class Yolov8Node(Node):
    def __init__(self):
        super().__init__("yolov8_node")
 
        # node params
        self.args = parse_argument()
        
        # self._class_to_color = {}
        self.cv_bridge = CvBridge()
 
        # yolo
        self.yolo = YOLO(self.args.model)
        self.yolo.fuse()
        
        self.yolo.to(self.args.device)
        
        # topic publishers & subscribers
        # self.publisher = self.create_publisher(Image, "inference_image", 10)
        
        self.publisher = self.create_publisher(BoundingBoxes, "/yolov8_ros_bbox", 10)
        
        self.subscription = self.create_subscription(
            Image,
            self.args.input_image_topic,
            self.image_callback,
            qos_profile_sensor_data
        )
 
 
    def image_callback(self, msg):
 
        # if self.args.enable:
        # record start time
        fps_start_t = time.time()
 
        # detect
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")
 
        infer_start_t = time.perf_counter()
        results = self.yolo.predict(
            source=cv_image,
            verbose=False,
            stream=False,
            conf=self.args.conf_threshold,
            iou=self.args.iou_threshold,
            show=self.args.show_inference_image,
            mode="predict",
            save=self.args.save
        )
        end_time = time.perf_counter()
 
        fps = 1.0 / (end_time - fps_start_t)
        # print("FPS:", fps)
        
        
        # publish detect result
        bounding_boxes = BoundingBoxes()
        # Bounding_boxes.header = msg.header
        # Bounding_boxes.image_header = msg.header
        
        boxes = results[0].boxes.cpu().numpy()
        

        for i in range(len(boxes)):
            bbox_msg = BoundingBox()
            box = boxes[i]
            bbox_msg.class_id = str(int(box.cls[0]))
            bbox_msg.probability = box.conf[0]/1.0
            bbox_msg.xmin = int(box.xyxy[0][0])
            bbox_msg.ymin = int(box.xyxy[0][1])
            bbox_msg.xmax = int(box.xyxy[0][2])
            bbox_msg.ymax = int(box.xyxy[0][3])

            bounding_boxes.bounding_boxes.append(bbox_msg)
        

        self.publisher.publish(bounding_boxes)
        
        
        # visualize the results on the frame
        # annotated_image = results[0].plot()
        # append msg
        # pub_msg = self.cv_bridge.cv2_to_imgmsg(annotated_image, "bgr8")
        # self.publisher.publish(pub_msg)
            


def main():
    rclpy.init()
    node = Yolov8Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
 
 
if __name__ == '__main__':
    main()
