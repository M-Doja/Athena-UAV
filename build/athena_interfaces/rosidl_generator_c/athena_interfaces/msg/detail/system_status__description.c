// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include "athena_interfaces/msg/detail/system_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_athena_interfaces
const rosidl_type_hash_t *
athena_interfaces__msg__SystemStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x84, 0x02, 0xef, 0xf1, 0x89, 0x1a, 0x0a,
      0x22, 0x38, 0xe1, 0xe0, 0x68, 0x5e, 0xaa, 0x3a,
      0xe1, 0x65, 0x75, 0x96, 0xf8, 0x5f, 0x7d, 0x53,
      0x37, 0x92, 0x64, 0xfa, 0x01, 0x23, 0x4a, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char athena_interfaces__msg__SystemStatus__TYPE_NAME[] = "athena_interfaces/msg/SystemStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char athena_interfaces__msg__SystemStatus__FIELD_NAME__overall_state[] = "overall_state";
static char athena_interfaces__msg__SystemStatus__FIELD_NAME__active_nodes[] = "active_nodes";
static char athena_interfaces__msg__SystemStatus__FIELD_NAME__warning_count[] = "warning_count";
static char athena_interfaces__msg__SystemStatus__FIELD_NAME__error_count[] = "error_count";
static char athena_interfaces__msg__SystemStatus__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field athena_interfaces__msg__SystemStatus__FIELDS[] = {
  {
    {athena_interfaces__msg__SystemStatus__FIELD_NAME__overall_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemStatus__FIELD_NAME__active_nodes, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemStatus__FIELD_NAME__warning_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemStatus__FIELD_NAME__error_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription athena_interfaces__msg__SystemStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
athena_interfaces__msg__SystemStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {athena_interfaces__msg__SystemStatus__TYPE_NAME, 34, 34},
      {athena_interfaces__msg__SystemStatus__FIELDS, 5, 5},
    },
    {athena_interfaces__msg__SystemStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string overall_state\n"
  "\n"
  "uint32 active_nodes\n"
  "uint32 warning_count\n"
  "uint32 error_count\n"
  "\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
athena_interfaces__msg__SystemStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {athena_interfaces__msg__SystemStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
athena_interfaces__msg__SystemStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *athena_interfaces__msg__SystemStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
