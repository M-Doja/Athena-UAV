// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_health.hpp"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__TRAITS_HPP_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "athena_interfaces/msg/detail/system_health__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace athena_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemHealth & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: memory_usage
  {
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
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
  const SystemHealth & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: memory_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
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

inline std::string to_yaml(const SystemHealth & msg, bool use_flow_style = false)
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
  const athena_interfaces::msg::SystemHealth & msg,
  std::ostream & out, size_t indentation = 0)
{
  athena_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use athena_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const athena_interfaces::msg::SystemHealth & msg)
{
  return athena_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<athena_interfaces::msg::SystemHealth>()
{
  return "athena_interfaces::msg::SystemHealth";
}

template<>
inline const char * name<athena_interfaces::msg::SystemHealth>()
{
  return "athena_interfaces/msg/SystemHealth";
}

template<>
struct has_fixed_size<athena_interfaces::msg::SystemHealth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<athena_interfaces::msg::SystemHealth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<athena_interfaces::msg::SystemHealth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__TRAITS_HPP_
