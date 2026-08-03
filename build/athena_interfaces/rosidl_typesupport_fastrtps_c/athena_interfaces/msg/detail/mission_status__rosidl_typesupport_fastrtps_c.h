// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from athena_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#ifndef ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "athena_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "athena_interfaces/msg/detail/mission_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
bool cdr_serialize_athena_interfaces__msg__MissionStatus(
  const athena_interfaces__msg__MissionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
bool cdr_deserialize_athena_interfaces__msg__MissionStatus(
  eprosima::fastcdr::Cdr &,
  athena_interfaces__msg__MissionStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
size_t get_serialized_size_athena_interfaces__msg__MissionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
size_t max_serialized_size_athena_interfaces__msg__MissionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
bool cdr_serialize_key_athena_interfaces__msg__MissionStatus(
  const athena_interfaces__msg__MissionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
size_t get_serialized_size_key_athena_interfaces__msg__MissionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
size_t max_serialized_size_key_athena_interfaces__msg__MissionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_athena_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, athena_interfaces, msg, MissionStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ATHENA_INTERFACES__MSG__DETAIL__MISSION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
