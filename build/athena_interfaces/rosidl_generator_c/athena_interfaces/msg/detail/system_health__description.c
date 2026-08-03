// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice

#include "athena_interfaces/msg/detail/system_health__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_athena_interfaces
const rosidl_type_hash_t *
athena_interfaces__msg__SystemHealth__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x31, 0x37, 0x72, 0xb1, 0xb1, 0xa8, 0x3a,
      0xe8, 0x54, 0xb1, 0xdf, 0xa5, 0xf1, 0x06, 0x7d,
      0xfc, 0x1c, 0xca, 0x18, 0xbd, 0xf7, 0x8d, 0x06,
      0x09, 0xc2, 0x04, 0xaf, 0xc7, 0x7e, 0x79, 0x5c,
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

static char athena_interfaces__msg__SystemHealth__TYPE_NAME[] = "athena_interfaces/msg/SystemHealth";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char athena_interfaces__msg__SystemHealth__FIELD_NAME__node_name[] = "node_name";
static char athena_interfaces__msg__SystemHealth__FIELD_NAME__state[] = "state";
static char athena_interfaces__msg__SystemHealth__FIELD_NAME__cpu_usage[] = "cpu_usage";
static char athena_interfaces__msg__SystemHealth__FIELD_NAME__memory_usage[] = "memory_usage";
static char athena_interfaces__msg__SystemHealth__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field athena_interfaces__msg__SystemHealth__FIELDS[] = {
  {
    {athena_interfaces__msg__SystemHealth__FIELD_NAME__node_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemHealth__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemHealth__FIELD_NAME__cpu_usage, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemHealth__FIELD_NAME__memory_usage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__SystemHealth__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription athena_interfaces__msg__SystemHealth__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
athena_interfaces__msg__SystemHealth__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {athena_interfaces__msg__SystemHealth__TYPE_NAME, 34, 34},
      {athena_interfaces__msg__SystemHealth__FIELDS, 5, 5},
    },
    {athena_interfaces__msg__SystemHealth__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node_name\n"
  "string state\n"
  "float32 cpu_usage\n"
  "float32 memory_usage\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
athena_interfaces__msg__SystemHealth__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {athena_interfaces__msg__SystemHealth__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 103, 103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
athena_interfaces__msg__SystemHealth__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *athena_interfaces__msg__SystemHealth__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
