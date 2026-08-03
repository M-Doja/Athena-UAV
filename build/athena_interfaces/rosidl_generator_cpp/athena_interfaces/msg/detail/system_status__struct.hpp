// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_status.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__athena_interfaces__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__athena_interfaces__msg__SystemStatus __declspec(deprecated)
#endif

namespace athena_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overall_state = "";
      this->active_nodes = 0ul;
      this->warning_count = 0ul;
      this->error_count = 0ul;
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : overall_state(_alloc),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overall_state = "";
      this->active_nodes = 0ul;
      this->warning_count = 0ul;
      this->error_count = 0ul;
    }
  }

  // field types and members
  using _overall_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _overall_state_type overall_state;
  using _active_nodes_type =
    uint32_t;
  _active_nodes_type active_nodes;
  using _warning_count_type =
    uint32_t;
  _warning_count_type warning_count;
  using _error_count_type =
    uint32_t;
  _error_count_type error_count;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__overall_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->overall_state = _arg;
    return *this;
  }
  Type & set__active_nodes(
    const uint32_t & _arg)
  {
    this->active_nodes = _arg;
    return *this;
  }
  Type & set__warning_count(
    const uint32_t & _arg)
  {
    this->warning_count = _arg;
    return *this;
  }
  Type & set__error_count(
    const uint32_t & _arg)
  {
    this->error_count = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    athena_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const athena_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      athena_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      athena_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__athena_interfaces__msg__SystemStatus
    std::shared_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__athena_interfaces__msg__SystemStatus
    std::shared_ptr<athena_interfaces::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->overall_state != other.overall_state) {
      return false;
    }
    if (this->active_nodes != other.active_nodes) {
      return false;
    }
    if (this->warning_count != other.warning_count) {
      return false;
    }
    if (this->error_count != other.error_count) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  athena_interfaces::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
