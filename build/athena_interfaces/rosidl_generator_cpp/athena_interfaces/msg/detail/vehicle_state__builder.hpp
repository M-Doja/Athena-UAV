// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from athena_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/vehicle_state.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "athena_interfaces/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace athena_interfaces
{

namespace msg
{

namespace builder
{

class Init_VehicleState_timestamp
{
public:
  explicit Init_VehicleState_timestamp(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::athena_interfaces::msg::VehicleState timestamp(::athena_interfaces::msg::VehicleState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_armed
{
public:
  explicit Init_VehicleState_armed(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_timestamp armed(::athena_interfaces::msg::VehicleState::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_VehicleState_timestamp(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_flight_mode
{
public:
  explicit Init_VehicleState_flight_mode(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_armed flight_mode(::athena_interfaces::msg::VehicleState::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return Init_VehicleState_armed(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_battery_percent
{
public:
  explicit Init_VehicleState_battery_percent(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_flight_mode battery_percent(::athena_interfaces::msg::VehicleState::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return Init_VehicleState_flight_mode(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_altitude
{
public:
  explicit Init_VehicleState_altitude(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_battery_percent altitude(::athena_interfaces::msg::VehicleState::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_VehicleState_battery_percent(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_longitude
{
public:
  explicit Init_VehicleState_longitude(::athena_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_altitude longitude(::athena_interfaces::msg::VehicleState::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_VehicleState_altitude(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_latitude
{
public:
  Init_VehicleState_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_longitude latitude(::athena_interfaces::msg::VehicleState::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_VehicleState_longitude(msg_);
  }

private:
  ::athena_interfaces::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::athena_interfaces::msg::VehicleState>()
{
  return athena_interfaces::msg::builder::Init_VehicleState_latitude();
}

}  // namespace athena_interfaces

#endif  // ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
