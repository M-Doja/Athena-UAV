// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_status.h"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'overall_state'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SystemStatus in the package athena_interfaces.
typedef struct athena_interfaces__msg__SystemStatus
{
  rosidl_runtime_c__String overall_state;
  uint32_t active_nodes;
  uint32_t warning_count;
  uint32_t error_count;
  builtin_interfaces__msg__Time timestamp;
} athena_interfaces__msg__SystemStatus;

// Struct for a sequence of athena_interfaces__msg__SystemStatus.
typedef struct athena_interfaces__msg__SystemStatus__Sequence
{
  athena_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} athena_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
