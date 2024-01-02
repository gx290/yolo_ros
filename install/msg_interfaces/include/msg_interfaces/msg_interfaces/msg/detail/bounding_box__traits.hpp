// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_interfaces/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: xmin
  {
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << ", ";
  }

  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: xmax
  {
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use msg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_interfaces::msg::BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_interfaces::msg::BoundingBox & msg)
{
  return msg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interfaces::msg::BoundingBox>()
{
  return "msg_interfaces::msg::BoundingBox";
}

template<>
inline const char * name<msg_interfaces::msg::BoundingBox>()
{
  return "msg_interfaces/msg/BoundingBox";
}

template<>
struct has_fixed_size<msg_interfaces::msg::BoundingBox>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interfaces::msg::BoundingBox>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interfaces::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
