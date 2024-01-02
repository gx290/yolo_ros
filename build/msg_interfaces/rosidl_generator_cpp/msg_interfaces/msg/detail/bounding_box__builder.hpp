// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interfaces/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::msg_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::msg_interfaces::msg::BoundingBox ymax(::msg_interfaces::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::msg_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::msg_interfaces::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::msg_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::msg_interfaces::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  explicit Init_BoundingBox_xmin(::msg_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymin xmin(::msg_interfaces::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_probability
{
public:
  explicit Init_BoundingBox_probability(::msg_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmin probability(::msg_interfaces::msg::BoundingBox::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_BoundingBox_xmin(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_class_id
{
public:
  Init_BoundingBox_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_probability class_id(::msg_interfaces::msg::BoundingBox::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_BoundingBox_probability(msg_);
  }

private:
  ::msg_interfaces::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interfaces::msg::BoundingBox>()
{
  return msg_interfaces::msg::builder::Init_BoundingBox_class_id();
}

}  // namespace msg_interfaces

#endif  // MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
