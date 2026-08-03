// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from athena_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/mission_status.h"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'current_task'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MissionStatus in the package athena_interfaces.
typedef struct athena_interfaces__msg__MissionStatus
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String current_task;
  uint8_t progress;
  bool active;
  builtin_interfaces__msg__Time timestamp;
} athena_interfaces__msg__MissionStatus;

// Struct for a sequence of athena_interfaces__msg__MissionStatus.
typedef struct athena_interfaces__msg__MissionStatus__Sequence
{
  athena_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} athena_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
