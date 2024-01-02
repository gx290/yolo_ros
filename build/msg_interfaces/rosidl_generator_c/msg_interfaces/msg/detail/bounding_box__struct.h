// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BoundingBox in the package msg_interfaces.
typedef struct msg_interfaces__msg__BoundingBox
{
  rosidl_runtime_c__String class_id;
  double probability;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
} msg_interfaces__msg__BoundingBox;

// Struct for a sequence of msg_interfaces__msg__BoundingBox.
typedef struct msg_interfaces__msg__BoundingBox__Sequence
{
  msg_interfaces__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interfaces__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
