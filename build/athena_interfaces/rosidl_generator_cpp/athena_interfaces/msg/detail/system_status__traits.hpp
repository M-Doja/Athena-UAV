// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_status.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "athena_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace athena_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: overall_state
  {
    out << "overall_state: ";
    rosidl_generator_traits::value_to_yaml(msg.overall_state, out);
    out << ", ";
  }

  // member: active_nodes
  {
    out << "active_nodes: ";
    rosidl_generator_traits::value_to_yaml(msg.active_nodes, out);
    out << ", ";
  }

  // member: warning_count
  {
    out << "warning_count: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_count, out);
    out << ", ";
  }

  // member: error_count
  {
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
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
  const SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: overall_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overall_state: ";
    rosidl_generator_traits::value_to_yaml(msg.overall_state, out);
    out << "\n";
  }

  // member: active_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_nodes: ";
    rosidl_generator_traits::value_to_yaml(msg.active_nodes, out);
    out << "\n";
  }

  // member: warning_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_count: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_count, out);
    out << "\n";
  }

  // member: error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
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

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const athena_interfaces::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  athena_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use athena_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const athena_interfaces::msg::SystemStatus & msg)
{
  return athena_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<athena_interfaces::msg::SystemStatus>()
{
  return "athena_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<athena_interfaces::msg::SystemStatus>()
{
  return "athena_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<athena_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<athena_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<athena_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
