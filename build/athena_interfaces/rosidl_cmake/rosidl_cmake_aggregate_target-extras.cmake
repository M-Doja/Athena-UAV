# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target athena_interfaces::athena_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${athena_interfaces_TARGETS}.
if(athena_interfaces_TARGETS AND NOT TARGET athena_interfaces::athena_interfaces)
  add_library(athena_interfaces::athena_interfaces INTERFACE IMPORTED)
  set_target_properties(athena_interfaces::athena_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${athena_interfaces_TARGETS}")
endif()
