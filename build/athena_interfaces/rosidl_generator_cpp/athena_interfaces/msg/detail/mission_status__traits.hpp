// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from athena_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/mission_status.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "athena_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace athena_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: current_task
  {
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
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
  const MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: current_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
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

inline std::string to_yaml(const MissionStatus & msg, bool use_flow_style = false)
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
  const athena_interfaces::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  athena_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use athena_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const athena_interfaces::msg::MissionStatus & msg)
{
  return athena_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<athena_interfaces::msg::MissionStatus>()
{
  return "athena_interfaces::msg::MissionStatus";
}

template<>
inline const char * name<athena_interfaces::msg::MissionStatus>()
{
  return "athena_interfaces/msg/MissionStatus";
}

template<>
struct has_fixed_size<athena_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<athena_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<athena_interfaces::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
