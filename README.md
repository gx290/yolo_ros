## ROS


- 虚拟机软件：virtualbox
- Linux操作系统：ubuntu  22.04
- ROS2版本：Humble Hawksbill



#### 实现

**两个节点：**

**1. usb_cam包中的camera1节点**

​	usb_cam是ROS的一个常用摄像头软件包，可以订阅摄像头的图像话题，将图像数据发布到话题

​	 `/camera1/image_raw`

**2. yolov8包中的yolov8_node节点**

​	1）创建订阅者，订阅话题 `/camera1/image_raw` ，接收数据

​	2）使用yolov8进行检测

​	3）创建发布者，将检测结果发布到话题 `/yolov8_ros_bbox` 

**两个话题：**

1.  `/camera1/image_raw` ：传递摄像头的数据

2.  `/yolov8_ros_bbox`：传递yolov8推理的结果



**启动文件：**

在yolov8包中的launch目录下创建detector.launch.py启动文件，该文件实现先调用usb_cam的启动文件，再启动yolov8_node节点。

**消息类型：**

`\yolov8_ros_bbox` 话题中传递的bounding_boxes消息类型是自定义的，包括以下几个内容：

- class_id：类别
- probability：概率
- xmin、ymin：左上角坐标
- xmax、ymax：右下角坐标



**效果：**

使用 `ros2 launch yolov8 detector.launch.py` 命令启动

（本机摄像头，在摄像头前放了一张图片测试）
