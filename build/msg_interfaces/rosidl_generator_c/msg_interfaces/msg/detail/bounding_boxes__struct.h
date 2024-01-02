// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_
#define MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bounding_boxes'
#include "msg_interfaces/msg/detail/bounding_box__struct.h"

/// Struct defined in msg/BoundingBoxes in the package msg_interfaces.
typedef struct msg_interfaces__msg__BoundingBoxes
{
  msg_interfaces__msg__BoundingBox__Sequence bounding_boxes;
} msg_interfaces__msg__BoundingBoxes;

// Struct for a sequence of msg_interfaces__msg__BoundingBoxes.
typedef struct msg_interfaces__msg__BoundingBoxes__Sequence
{
  msg_interfaces__msg__BoundingBoxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interfaces__msg__BoundingBoxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_
