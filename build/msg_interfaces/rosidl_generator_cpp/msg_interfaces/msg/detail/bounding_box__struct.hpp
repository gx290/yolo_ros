// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
#define MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_interfaces__msg__BoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__msg_interfaces__msg__BoundingBox __declspec(deprecated)
#endif

namespace msg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBox_
{
  using Type = BoundingBox_<ContainerAllocator>;

  explicit BoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = "";
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
    }
  }

  explicit BoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = "";
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
    }
  }

  // field types and members
  using _class_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_id_type class_id;
  using _probability_type =
    double;
  _probability_type probability;
  using _xmin_type =
    int64_t;
  _xmin_type xmin;
  using _ymin_type =
    int64_t;
  _ymin_type ymin;
  using _xmax_type =
    int64_t;
  _xmax_type xmax;
  using _ymax_type =
    int64_t;
  _ymax_type ymax;

  // setters for named parameter idiom
  Type & set__class_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__xmin(
    const int64_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const int64_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int64_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const int64_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_interfaces::msg::BoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_interfaces::msg::BoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_interfaces::msg::BoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_interfaces::msg::BoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_interfaces__msg__BoundingBox
    std::shared_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_interfaces__msg__BoundingBox
    std::shared_ptr<msg_interfaces::msg::BoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBox_ & other) const
  {
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBox_

// alias to use template instance with default allocator
using BoundingBox =
  msg_interfaces::msg::BoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_interfaces

#endif  // MSG_INTERFACES__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
