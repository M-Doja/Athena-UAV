// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from athena_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/vehicle_state.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "athena_interfaces/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace athena_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << ", ";
  }

  // member: flight_mode
  {
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << "\n";
  }

  // member: flight_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_mode, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleState & msg, bool use_flow_style = false)
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

}  // namespace athena_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use athena_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const athena_interfaces::msg::VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  athena_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use athena_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const athena_interfaces::msg::VehicleState & msg)
{
  return athena_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<athena_interfaces::msg::VehicleState>()
{
  return "athena_interfaces::msg::VehicleState";
}

template<>
inline const char * name<athena_interfaces::msg::VehicleState>()
{
  return "athena_interfaces/msg/VehicleState";
}

template<>
struct has_fixed_size<athena_interfaces::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<athena_interfaces::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<athena_interfaces::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
