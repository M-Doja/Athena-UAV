// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from athena_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/mission_status.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "athena_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace athena_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_timestamp
{
public:
  explicit Init_MissionStatus_timestamp(::athena_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::athena_interfaces::msg::MissionStatus timestamp(::athena_interfaces::msg::MissionStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::athena_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_active
{
public:
  explicit Init_MissionStatus_active(::athena_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_timestamp active(::athena_interfaces::msg::MissionStatus::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_MissionStatus_timestamp(msg_);
  }

private:
  ::athena_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_progress
{
public:
  explicit Init_MissionStatus_progress(::athena_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_active progress(::athena_interfaces::msg::MissionStatus::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_MissionStatus_active(msg_);
  }

private:
  ::athena_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_current_task
{
public:
  explicit Init_MissionStatus_current_task(::athena_interfaces::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_progress current_task(::athena_interfaces::msg::MissionStatus::_current_task_type arg)
  {
    msg_.current_task = std::move(arg);
    return Init_MissionStatus_progress(msg_);
  }

private:
  ::athena_interfaces::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_id
{
public:
  Init_MissionStatus_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_current_task mission_id(::athena_interfaces::msg::MissionStatus::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionStatus_current_task(msg_);
  }

private:
  ::athena_interfaces::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::athena_interfaces::msg::MissionStatus>()
{
  return athena_interfaces::msg::builder::Init_MissionStatus_mission_id();
}

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
