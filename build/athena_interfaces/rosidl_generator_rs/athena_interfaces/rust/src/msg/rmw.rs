#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "athena_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__SystemHealth() -> *const std::ffi::c_void;
}

#[link(name = "athena_interfaces__rosidl_generator_c")]
extern "C" {
    fn athena_interfaces__msg__SystemHealth__init(msg: *mut SystemHealth) -> bool;
    fn athena_interfaces__msg__SystemHealth__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemHealth>, size: usize) -> bool;
    fn athena_interfaces__msg__SystemHealth__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemHealth>);
    fn athena_interfaces__msg__SystemHealth__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemHealth>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemHealth>) -> bool;
}

// Corresponds to athena_interfaces__msg__SystemHealth
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cpu_usage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub memory_usage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SystemHealth {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !athena_interfaces__msg__SystemHealth__init(&mut msg as *mut _) {
        panic!("Call to athena_interfaces__msg__SystemHealth__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemHealth {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemHealth__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemHealth__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemHealth__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemHealth {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemHealth where Self: Sized {
  const TYPE_NAME: &'static str = "athena_interfaces/msg/SystemHealth";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__SystemHealth() }
  }
}


#[link(name = "athena_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__SystemStatus() -> *const std::ffi::c_void;
}

#[link(name = "athena_interfaces__rosidl_generator_c")]
extern "C" {
    fn athena_interfaces__msg__SystemStatus__init(msg: *mut SystemStatus) -> bool;
    fn athena_interfaces__msg__SystemStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>, size: usize) -> bool;
    fn athena_interfaces__msg__SystemStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>);
    fn athena_interfaces__msg__SystemStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>) -> bool;
}

// Corresponds to athena_interfaces__msg__SystemStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub overall_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_nodes: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SystemStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !athena_interfaces__msg__SystemStatus__init(&mut msg as *mut _) {
        panic!("Call to athena_interfaces__msg__SystemStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__SystemStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemStatus where Self: Sized {
  const TYPE_NAME: &'static str = "athena_interfaces/msg/SystemStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__SystemStatus() }
  }
}


#[link(name = "athena_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__VehicleState() -> *const std::ffi::c_void;
}

#[link(name = "athena_interfaces__rosidl_generator_c")]
extern "C" {
    fn athena_interfaces__msg__VehicleState__init(msg: *mut VehicleState) -> bool;
    fn athena_interfaces__msg__VehicleState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>, size: usize) -> bool;
    fn athena_interfaces__msg__VehicleState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>);
    fn athena_interfaces__msg__VehicleState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleState>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleState>) -> bool;
}

// Corresponds to athena_interfaces__msg__VehicleState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub altitude: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for VehicleState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !athena_interfaces__msg__VehicleState__init(&mut msg as *mut _) {
        panic!("Call to athena_interfaces__msg__VehicleState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__VehicleState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__VehicleState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__VehicleState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleState where Self: Sized {
  const TYPE_NAME: &'static str = "athena_interfaces/msg/VehicleState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__VehicleState() }
  }
}


#[link(name = "athena_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__MissionStatus() -> *const std::ffi::c_void;
}

#[link(name = "athena_interfaces__rosidl_generator_c")]
extern "C" {
    fn athena_interfaces__msg__MissionStatus__init(msg: *mut MissionStatus) -> bool;
    fn athena_interfaces__msg__MissionStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>, size: usize) -> bool;
    fn athena_interfaces__msg__MissionStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>);
    fn athena_interfaces__msg__MissionStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>) -> bool;
}

// Corresponds to athena_interfaces__msg__MissionStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MissionStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !athena_interfaces__msg__MissionStatus__init(&mut msg as *mut _) {
        panic!("Call to athena_interfaces__msg__MissionStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__MissionStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__MissionStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { athena_interfaces__msg__MissionStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionStatus where Self: Sized {
  const TYPE_NAME: &'static str = "athena_interfaces/msg/MissionStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__athena_interfaces__msg__MissionStatus() }
  }
}


