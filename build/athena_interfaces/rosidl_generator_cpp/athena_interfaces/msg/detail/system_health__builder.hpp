// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_health.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__BUILDER_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "athena_interfaces/msg/detail/system_health__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace athena_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemHealth_timestamp
{
public:
  explicit Init_SystemHealth_timestamp(::athena_interfaces::msg::SystemHealth & msg)
  : msg_(msg)
  {}
  ::athena_interfaces::msg::SystemHealth timestamp(::athena_interfaces::msg::SystemHealth::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::athena_interfaces::msg::SystemHealth msg_;
};

class Init_SystemHealth_memory_usage
{
public:
  explicit Init_SystemHealth_memory_usage(::athena_interfaces::msg::SystemHealth & msg)
  : msg_(msg)
  {}
  Init_SystemHealth_timestamp memory_usage(::athena_interfaces::msg::SystemHealth::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_SystemHealth_timestamp(msg_);
  }

private:
  ::athena_interfaces::msg::SystemHealth msg_;
};

class Init_SystemHealth_cpu_usage
{
public:
  explicit Init_SystemHealth_cpu_usage(::athena_interfaces::msg::SystemHealth & msg)
  : msg_(msg)
  {}
  Init_SystemHealth_memory_usage cpu_usage(::athena_interfaces::msg::SystemHealth::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_SystemHealth_memory_usage(msg_);
  }

private:
  ::athena_interfaces::msg::SystemHealth msg_;
};

class Init_SystemHealth_state
{
public:
  explicit Init_SystemHealth_state(::athena_interfaces::msg::SystemHealth & msg)
  : msg_(msg)
  {}
  Init_SystemHealth_cpu_usage state(::athena_interfaces::msg::SystemHealth::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SystemHealth_cpu_usage(msg_);
  }

private:
  ::athena_interfaces::msg::SystemHealth msg_;
};

class Init_SystemHealth_node_name
{
public:
  Init_SystemHealth_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemHealth_state node_name(::athena_interfaces::msg::SystemHealth::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_SystemHealth_state(msg_);
  }

private:
  ::athena_interfaces::msg::SystemHealth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::athena_interfaces::msg::SystemHealth>()
{
  return athena_interfaces::msg::builder::Init_SystemHealth_node_name();
}

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__BUILDER_HPP_
