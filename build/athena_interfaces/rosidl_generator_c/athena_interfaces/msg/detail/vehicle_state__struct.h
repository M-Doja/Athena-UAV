// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from athena_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "athena_interfaces/msg/vehicle_state.h"


#ifndef ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'flight_mode'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/VehicleState in the package athena_interfaces.
typedef struct athena_interfaces__msg__VehicleState
{
  double latitude;
  double longitude;
  float altitude;
  float battery_percent;
  rosidl_runtime_c__String flight_mode;
  bool armed;
  builtin_interfaces__msg__Time timestamp;
} athena_interfaces__msg__VehicleState;

// Struct for a sequence of athena_interfaces__msg__VehicleState.
typedef struct athena_interfaces__msg__VehicleState__Sequence
{
  athena_interfaces__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} athena_interfaces__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATHENA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
