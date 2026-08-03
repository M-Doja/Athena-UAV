// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_status.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "athena_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace athena_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_timestamp
{
public:
  explicit Init_SystemStatus_timestamp(::athena_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::athena_interfaces::msg::SystemStatus timestamp(::athena_interfaces::msg::SystemStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::athena_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_error_count
{
public:
  explicit Init_SystemStatus_error_count(::athena_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_timestamp error_count(::athena_interfaces::msg::SystemStatus::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return Init_SystemStatus_timestamp(msg_);
  }

private:
  ::athena_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_warning_count
{
public:
  explicit Init_SystemStatus_warning_count(::athena_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_error_count warning_count(::athena_interfaces::msg::SystemStatus::_warning_count_type arg)
  {
    msg_.warning_count = std::move(arg);
    return Init_SystemStatus_error_count(msg_);
  }

private:
  ::athena_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_active_nodes
{
public:
  explicit Init_SystemStatus_active_nodes(::athena_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_warning_count active_nodes(::athena_interfaces::msg::SystemStatus::_active_nodes_type arg)
  {
    msg_.active_nodes = std::move(arg);
    return Init_SystemStatus_warning_count(msg_);
  }

private:
  ::athena_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_overall_state
{
public:
  Init_SystemStatus_overall_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_active_nodes overall_state(::athena_interfaces::msg::SystemStatus::_overall_state_type arg)
  {
    msg_.overall_state = std::move(arg);
    return Init_SystemStatus_active_nodes(msg_);
  }

private:
  ::athena_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::athena_interfaces::msg::SystemStatus>()
{
  return athena_interfaces::msg::builder::Init_SystemStatus_overall_state();
}

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
