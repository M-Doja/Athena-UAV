// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_health.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_HPP_

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
# define DEPRECATED__athena_interfaces__msg__SystemHealth __attribute__((deprecated))
#else
# define DEPRECATED__athena_interfaces__msg__SystemHealth __declspec(deprecated)
#endif

namespace athena_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemHealth_
{
  using Type = SystemHealth_<ContainerAllocator>;

  explicit SystemHealth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->state = "";
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
    }
  }

  explicit SystemHealth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc),
    state(_alloc),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->state = "";
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
    }
  }

  // field types and members
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _cpu_usage_type =
    float;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    float;
  _memory_usage_type memory_usage;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__cpu_usage(
    const float & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const float & _arg)
  {
    this->memory_usage = _arg;
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
    athena_interfaces::msg::SystemHealth_<ContainerAllocator> *;
  using ConstRawPtr =
    const athena_interfaces::msg::SystemHealth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      athena_interfaces::msg::SystemHealth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      athena_interfaces::msg::SystemHealth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__athena_interfaces__msg__SystemHealth
    std::shared_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__athena_interfaces__msg__SystemHealth
    std::shared_ptr<athena_interfaces::msg::SystemHealth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemHealth_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemHealth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemHealth_

// alias to use template instance with default allocator
using SystemHealth =
  athena_interfaces::msg::SystemHealth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_HPP_
