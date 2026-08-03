// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/system_health.h"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_H_
#define ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SystemHealth in the package athena_interfaces.
typedef struct athena_interfaces__msg__SystemHealth
{
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String state;
  float cpu_usage;
  float memory_usage;
  builtin_interfaces__msg__Time timestamp;
} athena_interfaces__msg__SystemHealth;

// Struct for a sequence of athena_interfaces__msg__SystemHealth.
typedef struct athena_interfaces__msg__SystemHealth__Sequence
{
  athena_interfaces__msg__SystemHealth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} athena_interfaces__msg__SystemHealth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATHENA_INTERFACES__MSG__DETAIL__SYSTEM_HEALTH__STRUCT_H_
