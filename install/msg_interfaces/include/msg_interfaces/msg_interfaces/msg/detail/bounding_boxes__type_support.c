// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_interfaces/msg/detail/bounding_boxes__rosidl_typesupport_introspection_c.h"
#include "msg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_interfaces/msg/detail/bounding_boxes__functions.h"
#include "msg_interfaces/msg/detail/bounding_boxes__struct.h"


// Include directives for member types
// Member `bounding_boxes`
#include "msg_interfaces/msg/bounding_box.h"
// Member `bounding_boxes`
#include "msg_interfaces/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interfaces__msg__BoundingBoxes__init(message_memory);
}

void msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_fini_function(void * message_memory)
{
  msg_interfaces__msg__BoundingBoxes__fini(message_memory);
}

size_t msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBoxes__bounding_boxes(
  const void * untyped_member)
{
  const msg_interfaces__msg__BoundingBox__Sequence * member =
    (const msg_interfaces__msg__BoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const msg_interfaces__msg__BoundingBox__Sequence * member =
    (const msg_interfaces__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__bounding_boxes(
  void * untyped_member, size_t index)
{
  msg_interfaces__msg__BoundingBox__Sequence * member =
    (msg_interfaces__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes__bounding_boxes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg_interfaces__msg__BoundingBox * item =
    ((const msg_interfaces__msg__BoundingBox *)
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__bounding_boxes(untyped_member, index));
  msg_interfaces__msg__BoundingBox * value =
    (msg_interfaces__msg__BoundingBox *)(untyped_value);
  *value = *item;
}

void msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes__bounding_boxes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg_interfaces__msg__BoundingBox * item =
    ((msg_interfaces__msg__BoundingBox *)
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__bounding_boxes(untyped_member, index));
  const msg_interfaces__msg__BoundingBox * value =
    (const msg_interfaces__msg__BoundingBox *)(untyped_value);
  *item = *value;
}

bool msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes__bounding_boxes(
  void * untyped_member, size_t size)
{
  msg_interfaces__msg__BoundingBox__Sequence * member =
    (msg_interfaces__msg__BoundingBox__Sequence *)(untyped_member);
  msg_interfaces__msg__BoundingBox__Sequence__fini(member);
  return msg_interfaces__msg__BoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[1] = {
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interfaces__msg__BoundingBoxes, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBoxes__bounding_boxes,  // size() function pointer
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__bounding_boxes,  // get_const(index) function pointer
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__bounding_boxes,  // get(index) function pointer
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes__bounding_boxes,  // fetch(index, &value) function pointer
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes__bounding_boxes,  // assign(index, value) function pointer
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members = {
  "msg_interfaces__msg",  // message namespace
  "BoundingBoxes",  // message name
  1,  // number of fields
  sizeof(msg_interfaces__msg__BoundingBoxes),
  msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array,  // message members
  msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle = {
  0,
  &msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interfaces, msg, BoundingBoxes)() {
  msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interfaces, msg, BoundingBox)();
  if (!msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier) {
    msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_interfaces__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
