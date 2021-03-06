// Copyright 2007 - 2011 by Ember Corporation. All rights reserved.
// 
// This file is generated. Please do not edit manually.
// 
// This file is generated from java code via the following methods:
// com.ember.workbench.app_configurator.generator.EmbeddedCodeGenerator.generateEnums()
//

// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_ENUMS__
#define __EMBER_AF_ENUMS__


// Enums

// CommissioningStartupControl
typedef enum {
  EMBER_ZCL_COMMISSIONING_STARTUP_CONTROL_NO_ACTION           = 0x00,
  EMBER_ZCL_COMMISSIONING_STARTUP_CONTROL_FORM_NETWORK        = 0x01,
  EMBER_ZCL_COMMISSIONING_STARTUP_CONTROL_REJOIN_NETWORK      = 0x02,
  EMBER_ZCL_COMMISSIONING_STARTUP_CONTROL_START_FROM_SCRATCH  = 0x03
} EmberAfCommissioningStartupControl;

// MeteringBlockEnumerations
typedef enum {
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_NO_BLOCKS_IN_USE  = 0x00,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK1            = 0x01,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK2            = 0x02,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK3            = 0x03,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK4            = 0x04,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK5            = 0x05,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK6            = 0x06,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK7            = 0x07,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK8            = 0x08,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK9            = 0x09,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK10           = 0x0A,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK11           = 0x0B,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK12           = 0x0C,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK13           = 0x0D,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK14           = 0x0E,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK15           = 0x0F,
  EMBER_ZCL_METERING_BLOCK_ENUMERATIONS_BLOCK16           = 0x10
} EmberAfMeteringBlockEnumerations;

// MeteringSupplyStatus
typedef enum {
  EMBER_ZCL_METERING_SUPPLY_STATUS_SUPPLY_OFF        = 0x00,
  EMBER_ZCL_METERING_SUPPLY_STATUS_SUPPLY_OFF_ARMED  = 0x01,
  EMBER_ZCL_METERING_SUPPLY_STATUS_SUPPLY_ON         = 0x02
} EmberAfMeteringSupplyStatus;

// MeteringTemperatureUnitOfMeasure
typedef enum {
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_KELVIN          = 0x00,
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_CELSIUS         = 0x01,
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_FAHRENHEIT      = 0x02,
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_KELVIN_BCD      = 0x80,
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_CELSIUS_BCD     = 0x81,
  EMBER_ZCL_METERING_TEMPERATURE_UNIT_OF_MEASURE_FAHRENHEIT_BCD  = 0x82
} EmberAfMeteringTemperatureUnitOfMeasure;

// MeteringAlarmCode
typedef enum {
  EMBER_ZCL_METERING_ALARM_CODE_CHECK_METER                                  = 0x00,
  EMBER_ZCL_METERING_ALARM_CODE_LOW_BATTERY                                  = 0x01,
  EMBER_ZCL_METERING_ALARM_CODE_TAMPER_DETECT                                = 0x02,
  EMBER_ZCL_METERING_ALARM_CODE_POWER_FAILURE_PIPE_EMPTY_TEMPERATURE_SENSOR  = 0x03,
  EMBER_ZCL_METERING_ALARM_CODE_POWER_QUALITY_LOW_PRESSURE_BURST_DETECT      = 0x04,
  EMBER_ZCL_METERING_ALARM_CODE_LEAK_DETECT                                  = 0x05,
  EMBER_ZCL_METERING_ALARM_CODE_SERVICE_DISCONNECT                           = 0x06,
  EMBER_ZCL_METERING_ALARM_CODE_REVERSE_FLOW_FLOW_SENSOR                     = 0x07,
  EMBER_ZCL_METERING_ALARM_CODE_LOW_VOLTAGE_L1                               = 0x10,
  EMBER_ZCL_METERING_ALARM_CODE_HIGH_VOLTAGE_L1                              = 0x11,
  EMBER_ZCL_METERING_ALARM_CODE_LOW_VOLTAGE_L2                               = 0x12,
  EMBER_ZCL_METERING_ALARM_CODE_HIGH_VOLTAGE_L2                              = 0x13,
  EMBER_ZCL_METERING_ALARM_CODE_LOW_VOLTAGE_L3                               = 0x14,
  EMBER_ZCL_METERING_ALARM_CODE_HIGH_VOLTAGE_L3                              = 0x15,
  EMBER_ZCL_METERING_ALARM_CODE_OVER_CURRENT_L1                              = 0x16,
  EMBER_ZCL_METERING_ALARM_CODE_OVER_CURRENT_L2                              = 0x17,
  EMBER_ZCL_METERING_ALARM_CODE_OVER_CURRENT_L3                              = 0x18,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_LOW_L1                         = 0x19,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_HIGH_L1                        = 0x1A,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_LOW_L2                         = 0x1B,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_HIGH_L2                        = 0x1C,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_LOW_L3                         = 0x1D,
  EMBER_ZCL_METERING_ALARM_CODE_FREQUENCY_TOO_HIGH_L3                        = 0x1E,
  EMBER_ZCL_METERING_ALARM_CODE_GROUND_FAULT                                 = 0x1F,
  EMBER_ZCL_METERING_ALARM_CODE_ELECTRIC_TAMPER_DETECT                       = 0x20,
  EMBER_ZCL_METERING_ALARM_CODE_BURST_DETECT                                 = 0x30,
  EMBER_ZCL_METERING_ALARM_CODE_PRESSURE_TOO_LOW                             = 0x31,
  EMBER_ZCL_METERING_ALARM_CODE_PRESSURE_TOO_HIGH                            = 0x32,
  EMBER_ZCL_METERING_ALARM_CODE_FLOW_SENSOR_COMMUNICATION_ERROR              = 0x33,
  EMBER_ZCL_METERING_ALARM_CODE_FLOW_SENSOR_MEASUREMENT_FAULT                = 0x34,
  EMBER_ZCL_METERING_ALARM_CODE_FLOW_SENSOR_REVERSE_FLOW                     = 0x35,
  EMBER_ZCL_METERING_ALARM_CODE_FLOW_SENSOR_AIR_DETECT                       = 0x36,
  EMBER_ZCL_METERING_ALARM_CODE_PIPE_EMPTY                                   = 0x37,
  EMBER_ZCL_METERING_ALARM_CODE_INLET_TEMPERATURE_SENSOR_FAULT               = 0x50,
  EMBER_ZCL_METERING_ALARM_CODE_OUTLET_TEMPERATURE_SENSOR_FAULT              = 0x51
} EmberAfMeteringAlarmCode;

// MessagingControlTransmission
typedef enum {
  EMBER_ZCL_MESSAGING_CONTROL_TRANSMISSION_NORMAL                = 0x00,
  EMBER_ZCL_MESSAGING_CONTROL_TRANSMISSION_NORMAL_AND_ANONYMOUS  = 0x01,
  EMBER_ZCL_MESSAGING_CONTROL_TRANSMISSION_ANONYMOUS             = 0x02,
  EMBER_ZCL_MESSAGING_CONTROL_TRANSMISSION_RESERVED              = 0x03
} EmberAfMessagingControlTransmission;

// MessagingControlImportance
typedef enum {
  EMBER_ZCL_MESSAGING_CONTROL_IMPORTANCE_LOW       = 0x00,
  EMBER_ZCL_MESSAGING_CONTROL_IMPORTANCE_MEDIUM    = 0x04,
  EMBER_ZCL_MESSAGING_CONTROL_IMPORTANCE_HIGH      = 0x08,
  EMBER_ZCL_MESSAGING_CONTROL_IMPORTANCE_CRITICAL  = 0x0C
} EmberAfMessagingControlImportance;

// MessagingControlConfirmation
typedef enum {
  EMBER_ZCL_MESSAGING_CONTROL_CONFIRMATION_NOT_REQUIRED  = 0x00,
  EMBER_ZCL_MESSAGING_CONTROL_CONFIRMATION_REQUIRED      = 0x80
} EmberAfMessagingControlConfirmation;

// OperatingMode
typedef enum {
  EMBER_ZCL_OPERATING_MODE_NORMAL     = 0x00,
  EMBER_ZCL_OPERATING_MODE_CONFIGURE  = 0x01
} EmberAfOperatingMode;

// Status
typedef enum {
  EMBER_ZCL_STATUS_SUCCESS                       = 0x00,
  EMBER_ZCL_STATUS_FAILURE                       = 0x01,
  EMBER_ZCL_STATUS_REQUEST_DENIED                = 0x70,
  EMBER_ZCL_STATUS_MULTIPLE_REQUEST_NOT_ALLOWED  = 0x71,
  EMBER_ZCL_STATUS_INDICATION_REDIRECTION_TO_AP  = 0x72,
  EMBER_ZCL_STATUS_PREFERENCE_DENIED             = 0x73,
  EMBER_ZCL_STATUS_PREFERENCE_IGNORED            = 0x74,
  EMBER_ZCL_STATUS_NOT_AUTHORIZED                = 0x7E,
  EMBER_ZCL_STATUS_RESERVED_FIELD_NOT_ZERO       = 0x7F,
  EMBER_ZCL_STATUS_MALFORMED_COMMAND             = 0x80,
  EMBER_ZCL_STATUS_UNSUP_CLUSTER_COMMAND         = 0x81,
  EMBER_ZCL_STATUS_UNSUP_GENERAL_COMMAND         = 0x82,
  EMBER_ZCL_STATUS_UNSUP_MANUF_CLUSTER_COMMAND   = 0x83,
  EMBER_ZCL_STATUS_UNSUP_MANUF_GENERAL_COMMAND   = 0x84,
  EMBER_ZCL_STATUS_INVALID_FIELD                 = 0x85,
  EMBER_ZCL_STATUS_UNSUPPORTED_ATTRIBUTE         = 0x86,
  EMBER_ZCL_STATUS_INVALID_VALUE                 = 0x87,
  EMBER_ZCL_STATUS_READ_ONLY                     = 0x88,
  EMBER_ZCL_STATUS_INSUFFICIENT_SPACE            = 0x89,
  EMBER_ZCL_STATUS_DUPLICATE_EXISTS              = 0x8A,
  EMBER_ZCL_STATUS_NOT_FOUND                     = 0x8B,
  EMBER_ZCL_STATUS_UNREPORTABLE_ATTRIBUTE        = 0x8C,
  EMBER_ZCL_STATUS_INVALID_DATA_TYPE             = 0x8D,
  EMBER_ZCL_STATUS_INVALID_SELECTOR              = 0x8E,
  EMBER_ZCL_STATUS_WRITE_ONLY                    = 0x8F,
  EMBER_ZCL_STATUS_INCONSISTENT_STARTUP_STATE    = 0x90,
  EMBER_ZCL_STATUS_DEFINED_OUT_OF_BAND           = 0x91,
  EMBER_ZCL_STATUS_ABORT                         = 0x95,
  EMBER_ZCL_STATUS_INVALID_IMAGE                 = 0x96,
  EMBER_ZCL_STATUS_WAIT_FOR_DATA                 = 0x97,
  EMBER_ZCL_STATUS_NO_IMAGE_AVAILABLE            = 0x98,
  EMBER_ZCL_STATUS_REQUIRE_MORE_IMAGE            = 0x99,
  EMBER_ZCL_STATUS_HARDWARE_FAILURE              = 0xC0,
  EMBER_ZCL_STATUS_SOFTWARE_FAILURE              = 0xC1,
  EMBER_ZCL_STATUS_CALIBRATION_ERROR             = 0xC2
} EmberAfStatus;

// PowerSource
typedef enum {
  EMBER_ZCL_POWER_SOURCE_UNKNOWN                          = 0x00,
  EMBER_ZCL_POWER_SOURCE_SINGLE_PHASE_MAINS               = 0x01,
  EMBER_ZCL_POWER_SOURCE_THREE_PHASE_MAINS                = 0x02,
  EMBER_ZCL_POWER_SOURCE_BATTERY                          = 0x03,
  EMBER_ZCL_POWER_SOURCE_DC_SOURCE                        = 0x04,
  EMBER_ZCL_POWER_SOURCE_EMERGENCY_MAINS_CONSTANT_POWER   = 0x05,
  EMBER_ZCL_POWER_SOURCE_EMERGENCY_MAINS_TRANSFER_SWITCH  = 0x06,
  EMBER_ZCL_POWER_SOURCE_BATTERY_BACKUP                   = 0x80
} EmberAfPowerSource;

// PhysicalEnvironment
typedef enum {
  EMBER_ZCL_PHYSICAL_ENVIRONMENT_UNSPECIFIED                    = 0x00,
  EMBER_ZCL_PHYSICAL_ENVIRONMENT_FIRST_PROFILE_SPECIFIED_VALUE  = 0x01,
  EMBER_ZCL_PHYSICAL_ENVIRONMENT_LAST_PROFILE_SPECIFIED_VALUE   = 0x7F,
  EMBER_ZCL_PHYSICAL_ENVIRONMENT_UNKNOWN                        = 0xFF
} EmberAfPhysicalEnvironment;

// BatterySize
typedef enum {
  EMBER_ZCL_BATTERY_SIZE_NO_BATTERY  = 0x00,
  EMBER_ZCL_BATTERY_SIZE_BUILT_IN    = 0x01,
  EMBER_ZCL_BATTERY_SIZE_OTHER       = 0x02,
  EMBER_ZCL_BATTERY_SIZE_AA          = 0x03,
  EMBER_ZCL_BATTERY_SIZE_AAA         = 0x04,
  EMBER_ZCL_BATTERY_SIZE_C           = 0x05,
  EMBER_ZCL_BATTERY_SIZE_D           = 0x06,
  EMBER_ZCL_BATTERY_SIZE_UNKNOWN     = 0xFF
} EmberAfBatterySize;

// SwitchType
typedef enum {
  EMBER_ZCL_SWITCH_TYPE_TOGGLE     = 0x00,
  EMBER_ZCL_SWITCH_TYPE_MOMENTARY  = 0x01
} EmberAfSwitchType;

// SwitchActions
typedef enum {
  EMBER_ZCL_SWITCH_ACTIONS_ON      = 0x00,
  EMBER_ZCL_SWITCH_ACTIONS_OFF     = 0x01,
  EMBER_ZCL_SWITCH_ACTIONS_TOGGLE  = 0x02
} EmberAfSwitchActions;

// MoveMode
typedef enum {
  EMBER_ZCL_MOVE_MODE_UP    = 0x00,
  EMBER_ZCL_MOVE_MODE_DOWN  = 0x01
} EmberAfMoveMode;

// StepMode
typedef enum {
  EMBER_ZCL_STEP_MODE_UP    = 0x00,
  EMBER_ZCL_STEP_MODE_DOWN  = 0x01
} EmberAfStepMode;

// LocationMethod
typedef enum {
  EMBER_ZCL_LOCATION_METHOD_LATERATION         = 0x00,
  EMBER_ZCL_LOCATION_METHOD_SIGNPOSTING        = 0x01,
  EMBER_ZCL_LOCATION_METHOD_RF_FINGERPRINTING  = 0x02,
  EMBER_ZCL_LOCATION_METHOD_OUT_OF_BAND        = 0x03
} EmberAfLocationMethod;

// PumpOperationMode
typedef enum {
  EMBER_ZCL_PUMP_OPERATION_MODE_NORMAL   = 0x00,
  EMBER_ZCL_PUMP_OPERATION_MODE_MINIMUM  = 0x01,
  EMBER_ZCL_PUMP_OPERATION_MODE_MAXIMUM  = 0x02,
  EMBER_ZCL_PUMP_OPERATION_MODE_LOCAL    = 0x03
} EmberAfPumpOperationMode;

// PumpControlMode
typedef enum {
  EMBER_ZCL_PUMP_CONTROL_MODE_CONSTANT_SPEED         = 0x00,
  EMBER_ZCL_PUMP_CONTROL_MODE_CONSTANT_PRESSURE      = 0x01,
  EMBER_ZCL_PUMP_CONTROL_MODE_PROPORTIONAL_PRESSURE  = 0x02,
  EMBER_ZCL_PUMP_CONTROL_MODE_CONSTANT_FLOW          = 0x03,
  EMBER_ZCL_PUMP_CONTROL_MODE_CONSTANT_TEMPERATURE   = 0x05,
  EMBER_ZCL_PUMP_CONTROL_MODE_AUTOMATIC              = 0x07
} EmberAfPumpControlMode;

// ThermostatControlSequence
typedef enum {
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_COOLING_ONLY                     = 0x00,
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_COOLING_WITH_REHEAT              = 0x01,
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_HEATING_ONLY                     = 0x02,
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_HEATING_WITH_REHEAT              = 0x03,
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_COOLING_AND_HEATING              = 0x04,
  EMBER_ZCL_THERMOSTAT_CONTROL_SEQUENCE_COOLING_AND_HEATING_WITH_REHEAT  = 0x05
} EmberAfThermostatControlSequence;

// ThermostatSystemMode
typedef enum {
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_OFF                = 0x00,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_AUTO               = 0x01,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_COOL               = 0x03,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_HEAT               = 0x04,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_EMERGENCY_HEATING  = 0x05,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_PRECOOLING         = 0x06,
  EMBER_ZCL_THERMOSTAT_SYSTEM_MODE_FAN_ONLY           = 0x07
} EmberAfThermostatSystemMode;

// SetpointAdjustMode
typedef enum {
  EMBER_ZCL_SETPOINT_ADJUST_MODE_HEAT_SETPOINT            = 0x00,
  EMBER_ZCL_SETPOINT_ADJUST_MODE_COOL_SETPOINT            = 0x01,
  EMBER_ZCL_SETPOINT_ADJUST_MODE_HEAT_AND_COOL_SETPOINTS  = 0x02
} EmberAfSetpointAdjustMode;

// FanMode
typedef enum {
  EMBER_ZCL_FAN_MODE_OFF     = 0x00,
  EMBER_ZCL_FAN_MODE_LOW     = 0x01,
  EMBER_ZCL_FAN_MODE_MEDIUM  = 0x02,
  EMBER_ZCL_FAN_MODE_HIGH    = 0x03,
  EMBER_ZCL_FAN_MODE_ON      = 0x04,
  EMBER_ZCL_FAN_MODE_AUTO    = 0x05,
  EMBER_ZCL_FAN_MODE_SMART   = 0x06
} EmberAfFanMode;

// FanModeSequence
typedef enum {
  EMBER_ZCL_FAN_MODE_SEQUENCE_LOW_MED_HIGH       = 0x00,
  EMBER_ZCL_FAN_MODE_SEQUENCE_LOW_HIGH           = 0x01,
  EMBER_ZCL_FAN_MODE_SEQUENCE_LOW_MED_HIGH_AUTO  = 0x02,
  EMBER_ZCL_FAN_MODE_SEQUENCE_LOW_HIGH_AUTO      = 0x03,
  EMBER_ZCL_FAN_MODE_SEQUENCE_ON_AUTO            = 0x04
} EmberAfFanModeSequence;

// RelativeHumidityMode
typedef enum {
  EMBER_ZCL_RELATIVE_HUMIDITY_MODE_MEASURE_LOCALLY           = 0x00,
  EMBER_ZCL_RELATIVE_HUMIDITY_MODE_UPDATED_OVER_THE_NETWORK  = 0x01
} EmberAfRelativeHumidityMode;

// DehumidifcationLockout
typedef enum {
  EMBER_ZCL_DEHUMIDIFCATION_LOCKOUT_NOT_ALLOWED  = 0x00,
  EMBER_ZCL_DEHUMIDIFCATION_LOCKOUT_ALLOWED      = 0x01
} EmberAfDehumidifcationLockout;

// RelativeHumidityDisplay
typedef enum {
  EMBER_ZCL_RELATIVE_HUMIDITY_DISPLAY_NOT_DISPLAYED  = 0x00,
  EMBER_ZCL_RELATIVE_HUMIDITY_DISPLAY_DISPLAYED      = 0x01
} EmberAfRelativeHumidityDisplay;

// TemperatureDisplayMode
typedef enum {
  EMBER_ZCL_TEMPERATURE_DISPLAY_MODE_CELSIUS    = 0x00,
  EMBER_ZCL_TEMPERATURE_DISPLAY_MODE_FARENHEIT  = 0x01
} EmberAfTemperatureDisplayMode;

// KeypadLockout
typedef enum {
  EMBER_ZCL_KEYPAD_LOCKOUT_NO_LOCKOUT           = 0x00,
  EMBER_ZCL_KEYPAD_LOCKOUT_LEVEL_ONE_LOCKOUT    = 0x01,
  EMBER_ZCL_KEYPAD_LOCKOUT_LEVEL_TWO_LOCKOUT    = 0x02,
  EMBER_ZCL_KEYPAD_LOCKOUT_LEVEL_THREE_LOCKOUT  = 0x03,
  EMBER_ZCL_KEYPAD_LOCKOUT_LEVEL_FOUR_LOCKOUT   = 0x04,
  EMBER_ZCL_KEYPAD_LOCKOUT_LEVELFIVE_LOCKOUT    = 0x05
} EmberAfKeypadLockout;

// HueDirection
typedef enum {
  EMBER_ZCL_HUE_DIRECTION_SHORTEST_DISTANCE  = 0x00,
  EMBER_ZCL_HUE_DIRECTION_LONGEST_DISTANCE   = 0x01,
  EMBER_ZCL_HUE_DIRECTION_UP                 = 0x02,
  EMBER_ZCL_HUE_DIRECTION_DOWN               = 0x03
} EmberAfHueDirection;

// HueMoveMode
typedef enum {
  EMBER_ZCL_HUE_MOVE_MODE_STOP  = 0x00,
  EMBER_ZCL_HUE_MOVE_MODE_UP    = 0x01,
  EMBER_ZCL_HUE_MOVE_MODE_DOWN  = 0x03
} EmberAfHueMoveMode;

// HueStepMode
typedef enum {
  EMBER_ZCL_HUE_STEP_MODE_UP    = 0x01,
  EMBER_ZCL_HUE_STEP_MODE_DOWN  = 0x03
} EmberAfHueStepMode;

// SaturationMoveMode
typedef enum {
  EMBER_ZCL_SATURATION_MOVE_MODE_STOP  = 0x00,
  EMBER_ZCL_SATURATION_MOVE_MODE_UP    = 0x01,
  EMBER_ZCL_SATURATION_MOVE_MODE_DOWN  = 0x03
} EmberAfSaturationMoveMode;

// SaturationStepMode
typedef enum {
  EMBER_ZCL_SATURATION_STEP_MODE_UP    = 0x01,
  EMBER_ZCL_SATURATION_STEP_MODE_DOWN  = 0x03
} EmberAfSaturationStepMode;

// ColorMode
typedef enum {
  EMBER_ZCL_COLOR_MODE_CURRENT_HUE_AND_CURRENT_SATURATION  = 0x00,
  EMBER_ZCL_COLOR_MODE_CURRENT_X_AND_CURRENT_Y             = 0x01,
  EMBER_ZCL_COLOR_MODE_COLOR_TEMPERATURE                   = 0x02
} EmberAfColorMode;

// MeasurementLightSensorType
typedef enum {
  EMBER_ZCL_MEASUREMENT_LIGHT_SENSOR_TYPE_PHOTODIODE  = 0x00,
  EMBER_ZCL_MEASUREMENT_LIGHT_SENSOR_TYPE_CMOS        = 0x01
} EmberAfMeasurementLightSensorType;

// LevelStatus
typedef enum {
  EMBER_ZCL_LEVEL_STATUS_ON_TARGET     = 0x00,
  EMBER_ZCL_LEVEL_STATUS_BELOW_TARGET  = 0x01,
  EMBER_ZCL_LEVEL_STATUS_ABOVE_TARGET  = 0x02
} EmberAfLevelStatus;

// SensingLightSensorType
typedef enum {
  EMBER_ZCL_SENSING_LIGHT_SENSOR_TYPE_PHOTODIODE  = 0x00,
  EMBER_ZCL_SENSING_LIGHT_SENSOR_TYPE_CMOS        = 0x01
} EmberAfSensingLightSensorType;

// OccupancySensorType
typedef enum {
  EMBER_ZCL_OCCUPANCY_SENSOR_TYPE_PIR                 = 0x00,
  EMBER_ZCL_OCCUPANCY_SENSOR_TYPE_ULTRASONIC          = 0x01,
  EMBER_ZCL_OCCUPANCY_SENSOR_TYPE_PIR_AND_ULTRASONIC  = 0x02
} EmberAfOccupancySensorType;

// IasZoneState
typedef enum {
  EMBER_ZCL_IAS_ZONE_STATE_NOT_ENROLLED  = 0x00,
  EMBER_ZCL_IAS_ZONE_STATE_ENROLLED      = 0x01
} EmberAfIasZoneState;

// IasZoneType
typedef enum {
  EMBER_ZCL_IAS_ZONE_TYPE_STANDARD_CIE               = 0x0000,
  EMBER_ZCL_IAS_ZONE_TYPE_MOTION_SENSOR              = 0x000D,
  EMBER_ZCL_IAS_ZONE_TYPE_CONTACT_SWITCH             = 0x0015,
  EMBER_ZCL_IAS_ZONE_TYPE_FIRE_SENSOR                = 0x0028,
  EMBER_ZCL_IAS_ZONE_TYPE_WATER_SENSOR               = 0x002A,
  EMBER_ZCL_IAS_ZONE_TYPE_GAS_SENSOR                 = 0x002B,
  EMBER_ZCL_IAS_ZONE_TYPE_PERSONAL_EMERGENCY_DEVICE  = 0x002C,
  EMBER_ZCL_IAS_ZONE_TYPE_VIBRATION_MOVEMENT_SENSOR  = 0x002D,
  EMBER_ZCL_IAS_ZONE_TYPE_REMOTE_CONTROL             = 0x010F,
  EMBER_ZCL_IAS_ZONE_TYPE_KEY_FOB                    = 0x0115,
  EMBER_ZCL_IAS_ZONE_TYPE_KEYPAD                     = 0x021D,
  EMBER_ZCL_IAS_ZONE_TYPE_STANDARD_WARNING_DEVICE    = 0x0225
} EmberAfIasZoneType;

// IasEnrollResponseCode
typedef enum {
  EMBER_ZCL_IAS_ENROLL_RESPONSE_CODE_SUCCESS           = 0x00,
  EMBER_ZCL_IAS_ENROLL_RESPONSE_CODE_NOT_SUPPORTED     = 0x01,
  EMBER_ZCL_IAS_ENROLL_RESPONSE_CODE_NO_ENROLL_PERMIT  = 0x02,
  EMBER_ZCL_IAS_ENROLL_RESPONSE_CODE_TOO_MANY_ZONES    = 0x03
} EmberAfIasEnrollResponseCode;

// IasAceArmMode
typedef enum {
  EMBER_ZCL_IAS_ACE_ARM_MODE_DISARM                      = 0x00,
  EMBER_ZCL_IAS_ACE_ARM_MODE_ARM_DAY_HOME_ZONES_ONLY     = 0x01,
  EMBER_ZCL_IAS_ACE_ARM_MODE_ARM_NIGHT_SLEEP_ZONES_ONLY  = 0x02,
  EMBER_ZCL_IAS_ACE_ARM_MODE_ARM_ALL_ZONES               = 0x03
} EmberAfIasAceArmMode;

// IasAceArmNotification
typedef enum {
  EMBER_ZCL_IAS_ACE_ARM_NOTIFICATION_ALL_ZONES_DISARMED            = 0x00,
  EMBER_ZCL_IAS_ACE_ARM_NOTIFICATION_ONLY_DAY_HOME_ZONES_ARMED     = 0x01,
  EMBER_ZCL_IAS_ACE_ARM_NOTIFICATION_ONLY_NIGHT_SLEEP_ZONES_ARMED  = 0x02,
  EMBER_ZCL_IAS_ACE_ARM_NOTIFICATION_ALL_ZONES_ARMED               = 0x03
} EmberAfIasAceArmNotification;

// WarningMode
typedef enum {
  EMBER_ZCL_WARNING_MODE_STOP       = 0x00,
  EMBER_ZCL_WARNING_MODE_BURGLAR    = 0x01,
  EMBER_ZCL_WARNING_MODE_FIRE       = 0x02,
  EMBER_ZCL_WARNING_MODE_EMERGENCY  = 0x03
} EmberAfWarningMode;

// WarningStobe
typedef enum {
  EMBER_ZCL_WARNING_STOBE_NO_STROBE   = 0x00,
  EMBER_ZCL_WARNING_STOBE_USE_STROBE  = 0x01
} EmberAfWarningStobe;

// SquawkMode
typedef enum {
  EMBER_ZCL_SQUAWK_MODE_SYSTEM_IS_ARMED     = 0x00,
  EMBER_ZCL_SQUAWK_MODE_SYSTEM_IS_DISARMED  = 0x01
} EmberAfSquawkMode;

// SquawkStobe
typedef enum {
  EMBER_ZCL_SQUAWK_STOBE_NO_STROBE   = 0x00,
  EMBER_ZCL_SQUAWK_STOBE_USE_STROBE  = 0x01
} EmberAfSquawkStobe;

// SquawkLevel
typedef enum {
  EMBER_ZCL_SQUAWK_LEVEL_LOW_LEVEL        = 0x00,
  EMBER_ZCL_SQUAWK_LEVEL_MEDIUM_LEVEL     = 0x01,
  EMBER_ZCL_SQUAWK_LEVEL_VERY_HIGH_LEVEL  = 0x02
} EmberAfSquawkLevel;

// AmiCriticalityLevel
typedef enum {
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_RESERVED            = 0x00,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_GREEN               = 0x01,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_1                   = 0x02,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_2                   = 0x03,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_3                   = 0x04,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_4                   = 0x05,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_5                   = 0x06,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_EMERGENCY           = 0x07,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_PLANNED_OUTAGE      = 0x08,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_SERVICE_DISCONNECT  = 0x09,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED1    = 0x0A,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED2    = 0x0B,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED3    = 0x0C,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED4    = 0x0D,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED5    = 0x0E,
  EMBER_ZCL_AMI_CRITICALITY_LEVEL_UTILITY_DEFINED6    = 0x0F
} EmberAfAmiCriticalityLevel;

// AmiEventStatus
typedef enum {
  EMBER_ZCL_AMI_EVENT_STATUS_LOAD_CONTROL_EVENT_COMMAND_RX                           = 0x01,
  EMBER_ZCL_AMI_EVENT_STATUS_EVENT_STARTED                                           = 0x02,
  EMBER_ZCL_AMI_EVENT_STATUS_EVENT_COMPLETED                                         = 0x03,
  EMBER_ZCL_AMI_EVENT_STATUS_USER_HAS_CHOOSE_TO_OPT_OUT                              = 0x04,
  EMBER_ZCL_AMI_EVENT_STATUS_USER_HAS_CHOOSE_TO_OPT_IN                               = 0x05,
  EMBER_ZCL_AMI_EVENT_STATUS_THE_EVENT_HAS_BEEN_CANCELED                             = 0x06,
  EMBER_ZCL_AMI_EVENT_STATUS_THE_EVENT_HAS_BEEN_SUPERSEDED                           = 0x07,
  EMBER_ZCL_AMI_EVENT_STATUS_EVENT_PARTIALLY_COMPLETED_WITH_USER_OPT_OUT             = 0x08,
  EMBER_ZCL_AMI_EVENT_STATUS_EVENT_PARTIALLY_COMPLETED_DUE_TO_USER_OPT_IN            = 0x09,
  EMBER_ZCL_AMI_EVENT_STATUS_EVENT_COMPLETED_NO_USER_PARTICIPATION_PREVIOUS_OPT_OUT  = 0x0A,
  EMBER_ZCL_AMI_EVENT_STATUS_REJECTED_INVALID_CANCEL_COMMAND                         = 0xF8,
  EMBER_ZCL_AMI_EVENT_STATUS_REJECTED_INVALID_CANCEL_COMMAND_INVALID_EFFECTIVE_TIME  = 0xF9,
  EMBER_ZCL_AMI_EVENT_STATUS_REJECTED_EVENT_EXPIRED                                  = 0xFB,
  EMBER_ZCL_AMI_EVENT_STATUS_REJECTED_INVALID_CANCEL_UNDEFINED_EVENT                 = 0xFD,
  EMBER_ZCL_AMI_EVENT_STATUS_LOAD_CONTROL_EVENT_COMMAND_REJECTED                     = 0xFE
} EmberAfAmiEventStatus;

// AmiUnitOfMeasure
typedef enum {
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KILO_WATT_HOURS                 = 0x00,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CUBIC_METER_PER_HOUR            = 0x01,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CUBIC_FEET_PER_HOUR             = 0x02,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CENTUM_CUBIC_FEET_PER_HOUR      = 0x03,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_US_GALLONS_PER_HOUR             = 0x04,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_IMPERIAL_GALLONS_PER_HOUR       = 0x05,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_BT_US_OR_BTU_PER_HOUR           = 0x06,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_LITERS_OR_LITERS_PER_HOUR       = 0x07,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KPA_GAUGE                       = 0x08,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KPA_ABSOLUTE                    = 0x09,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_MCF_OR_MCF_PER_SECOND           = 0x0A,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_UNITLESS                        = 0x0B,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_MJ_OR_MJ_PER_SECOND             = 0x0C,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KILO_WATT_HOURS_BCD             = 0x80,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CUBIC_METER_PER_HOUR_BCD        = 0x81,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CUBIC_FEET_PER_HOUR_BCD         = 0x82,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_CENTUM_CUBIC_FEET_PER_HOUR_BCD  = 0x83,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_US_GALLONS_PER_HOUR_BCD         = 0x84,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_IMPERIAL_GALLONS_PER_HOUR_BCD   = 0x85,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_BT_US_OR_BTU_PER_HOUR_BCD       = 0x86,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_LITERS_OR_LITERS_PER_HOUR_BCD   = 0x87,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KPA_GUAGE_BCD                   = 0x88,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_KPA_ABSOLUTE_BCD                = 0x89,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_MCF_OR_MCF_PER_SECOND_BCD       = 0x8A,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_UNITLESS_BCD                    = 0x8B,
  EMBER_ZCL_AMI_UNIT_OF_MEASURE_MJ_OR_MJ_PER_SECOND_BCD         = 0x8C
} EmberAfAmiUnitOfMeasure;

// AmiIntervalPeriod
typedef enum {
  EMBER_ZCL_AMI_INTERVAL_PERIOD_DAILY       = 0x00,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES60   = 0x01,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES30   = 0x02,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES15   = 0x03,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES10   = 0x04,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES7P5  = 0x05,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES5    = 0x06,
  EMBER_ZCL_AMI_INTERVAL_PERIOD_MINUTES2P5  = 0x07
} EmberAfAmiIntervalPeriod;

// AmiIntervalChannel
typedef enum {
  EMBER_ZCL_AMI_INTERVAL_CHANNEL_CONSUMPTION_DELIVERED  = 0x00,
  EMBER_ZCL_AMI_INTERVAL_CHANNEL_CONSUMPTION_RECEIVED   = 0x01
} EmberAfAmiIntervalChannel;

// AmiRegistrationState
typedef enum {
  EMBER_ZCL_AMI_REGISTRATION_STATE_UNREGISTERED                    = 0x00,
  EMBER_ZCL_AMI_REGISTRATION_STATE_JOINING_NETWORK                 = 0x01,
  EMBER_ZCL_AMI_REGISTRATION_STATE_JOINED_NETWORK                  = 0x02,
  EMBER_ZCL_AMI_REGISTRATION_STATE_SUBMITTED_REGISTRATION_REQUEST  = 0x03,
  EMBER_ZCL_AMI_REGISTRATION_STATE_REGISTRATION_REJECTED           = 0x04,
  EMBER_ZCL_AMI_REGISTRATION_STATE_REGISTERED                      = 0x05,
  EMBER_ZCL_AMI_REGISTRATION_STATE_REGISTERATION_NOT_POSSIBLE      = 0x06
} EmberAfAmiRegistrationState;

// AnonymousDataState
typedef enum {
  EMBER_ZCL_ANONYMOUS_DATA_STATE_NO_SOURCE_FOUND  = 0x00,
  EMBER_ZCL_ANONYMOUS_DATA_STATE_SOURCE_FOUND     = 0x01
} EmberAfAnonymousDataState;

// PriceTier
typedef enum {
  EMBER_ZCL_PRICE_TIER_NO_TIER_RELATED     = 0x00,
  EMBER_ZCL_PRICE_TIER_TIER1_PRICE_LABEL   = 0x01,
  EMBER_ZCL_PRICE_TIER_TIER2_PRICE_LABEL   = 0x02,
  EMBER_ZCL_PRICE_TIER_TIER3_PRICE_LABEL   = 0x03,
  EMBER_ZCL_PRICE_TIER_TIER4_PRICE_LABEL   = 0x04,
  EMBER_ZCL_PRICE_TIER_TIER5_PRICE_LABEL   = 0x05,
  EMBER_ZCL_PRICE_TIER_TIER6_PRICE_LABEL   = 0x06,
  EMBER_ZCL_PRICE_TIER_TIER7_PRICE_LABEL   = 0x07,
  EMBER_ZCL_PRICE_TIER_TIER8_PRICE_LABEL   = 0x08,
  EMBER_ZCL_PRICE_TIER_TIER9_PRICE_LABEL   = 0x09,
  EMBER_ZCL_PRICE_TIER_TIER10_PRICE_LABEL  = 0x0A,
  EMBER_ZCL_PRICE_TIER_TIER11_PRICE_LABEL  = 0x0B,
  EMBER_ZCL_PRICE_TIER_TIER12_PRICE_LABEL  = 0x0C,
  EMBER_ZCL_PRICE_TIER_TIER13_PRICE_LABEL  = 0x0D,
  EMBER_ZCL_PRICE_TIER_TIER14_PRICE_LABEL  = 0x0E,
  EMBER_ZCL_PRICE_TIER_TIER15_PRICE_LABEL  = 0x0F
} EmberAfPriceTier;

// PriceControlAcknowledgement
typedef enum {
  EMBER_ZCL_PRICE_CONTROL_ACKNOWLEDGEMENT_NOT_REQUIRED  = 0x00,
  EMBER_ZCL_PRICE_CONTROL_ACKNOWLEDGEMENT_REQUIRED      = 0x01
} EmberAfPriceControlAcknowledgement;

// RegisterTier
typedef enum {
  EMBER_ZCL_REGISTER_TIER_NO_TIER_RELATED                               = 0x00,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER1_SUMMATION_DELIVERED_ATTRIBUTE   = 0x01,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER2_SUMMATION_DELIVERED_ATTRIBUTE   = 0x02,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER3_SUMMATION_DELIVERED_ATTRIBUTE   = 0x03,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER4_SUMMATION_DELIVERED_ATTRIBUTE   = 0x04,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER5_SUMMATION_DELIVERED_ATTRIBUTE   = 0x05,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER6_SUMMATION_DELIVERED_ATTRIBUTE   = 0x06,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER7_SUMMATION_DELIVERED_ATTRIBUTE   = 0x07,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER8_SUMMATION_DELIVERED_ATTRIBUTE   = 0x08,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER9_SUMMATION_DELIVERED_ATTRIBUTE   = 0x09,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER10_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0A,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER11_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0B,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER12_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0C,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER13_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0D,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER14_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0E,
  EMBER_ZCL_REGISTER_TIER_CURRENT_TIER15_SUMMATION_DELIVERED_ATTRIBUTE  = 0x0F
} EmberAfRegisterTier;

// AlternateCostUnit
typedef enum {
  EMBER_ZCL_ALTERNATE_COST_UNIT_KG_OF_CO2_PER_UNIT_OF_MEASURE  = 0x02
} EmberAfAlternateCostUnit;

// AmiKeyEstablishmentStatus
typedef enum {
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_SUCCESS            = 0x00,
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_UNKNOWN_ISSUER     = 0x01,
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_BAD_KEY_CONFIRM    = 0x02,
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_BAD_MESSAGE        = 0x03,
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_NO_RESOURCES       = 0x04,
  EMBER_ZCL_AMI_KEY_ESTABLISHMENT_STATUS_UNSUPPORTED_SUITE  = 0x05
} EmberAfAmiKeyEstablishmentStatus;

// AmiGetProfileStatus
typedef enum {
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_SUCCESS                                        = 0x00,
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_UNDEFINED_INTERVAL_CHANNEL_REQUESTED           = 0x01,
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_INTERVAL_CHANNEL_NOT_SUPPORTED                 = 0x02,
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_INVALID_END_TIME                               = 0x03,
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_MORE_PERIODS_REQUESTED_THAN_CAN_BE_RETURNED    = 0x04,
  EMBER_ZCL_AMI_GET_PROFILE_STATUS_NO_INTERVALS_AVAILABLE_FOR_THE_REQUESTED_TIME  = 0x05
} EmberAfAmiGetProfileStatus;

// AttributeWritePermission
typedef enum {
  EMBER_ZCL_ATTRIBUTE_WRITE_PERMISSION_DENY_WRITE                = 0x00,
  EMBER_ZCL_ATTRIBUTE_WRITE_PERMISSION_ALLOW_WRITE_NORMAL        = 0x01,
  EMBER_ZCL_ATTRIBUTE_WRITE_PERMISSION_ALLOW_WRITE_OF_READ_ONLY  = 0x02
} EmberAfAttributeWritePermission;

// MeterDeviceType
typedef enum {
  EMBER_ZCL_METER_DEVICE_TYPE_ELECTRIC_METER           = 0x00,
  EMBER_ZCL_METER_DEVICE_TYPE_GAS_METER                = 0x01,
  EMBER_ZCL_METER_DEVICE_TYPE_WATER_METER              = 0x02,
  EMBER_ZCL_METER_DEVICE_TYPE_THERMAL_METER            = 0x03,
  EMBER_ZCL_METER_DEVICE_TYPE_PRESSURE_METER           = 0x04,
  EMBER_ZCL_METER_DEVICE_TYPE_HEAT_METER               = 0x05,
  EMBER_ZCL_METER_DEVICE_TYPE_COOLING_METER            = 0x06,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_GAS_METER       = 0x80,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_WATER_METER     = 0x81,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_THERMAL_METER   = 0x82,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_PRESSURE_METER  = 0x83,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_HEAT_METER      = 0x84,
  EMBER_ZCL_METER_DEVICE_TYPE_MIRRORED_COOLING_METER   = 0x85,
  EMBER_ZCL_METER_DEVICE_TYPE_UNDEFINED_MIRROR_METER   = 0xFE
} EmberAfMeterDeviceType;

// TunnelingProtocolId
typedef enum {
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_DLMS_COSEM    = 0x00,
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_IEC_61107     = 0x01,
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_ANSI_C12      = 0x02,
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_M_BUS         = 0x03,
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_SML           = 0x04,
  EMBER_ZCL_TUNNELING_PROTOCOL_ID_CLIMATE_TALK  = 0x05
} EmberAfTunnelingProtocolId;

// TunnelingTransferDataStatus
typedef enum {
  EMBER_ZCL_TUNNELING_TRANSFER_DATA_STATUS_NO_SUCH_TUNNEL  = 0x00,
  EMBER_ZCL_TUNNELING_TRANSFER_DATA_STATUS_WRONG_DEVICE    = 0x01
} EmberAfTunnelingTransferDataStatus;

// TunnelingTunnelStatus
typedef enum {
  EMBER_ZCL_TUNNELING_TUNNEL_STATUS_SUCCESS                     = 0x00,
  EMBER_ZCL_TUNNELING_TUNNEL_STATUS_BUSY                        = 0x01,
  EMBER_ZCL_TUNNELING_TUNNEL_STATUS_NO_MORE_TUNNEL_IDS          = 0x02,
  EMBER_ZCL_TUNNELING_TUNNEL_STATUS_PROTOCOL_NOT_SUPPORTED      = 0x03,
  EMBER_ZCL_TUNNELING_TUNNEL_STATUS_FLOW_CONTROL_NOT_SUPPORTED  = 0x04
} EmberAfTunnelingTunnelStatus;

// PrepaymentRecoveryPeriod
typedef enum {
  EMBER_ZCL_PREPAYMENT_RECOVERY_PERIOD_PER_HOUR     = 0x00,
  EMBER_ZCL_PREPAYMENT_RECOVERY_PERIOD_PER_DAY      = 0x01,
  EMBER_ZCL_PREPAYMENT_RECOVERY_PERIOD_PER_WEEK     = 0x02,
  EMBER_ZCL_PREPAYMENT_RECOVERY_PERIOD_PER_MONTH    = 0x03,
  EMBER_ZCL_PREPAYMENT_RECOVERY_PERIOD_PER_QUARTER  = 0x04
} EmberAfPrepaymentRecoveryPeriod;

// PrepaymentOriginatingDevice
typedef enum {
  EMBER_ZCL_PREPAYMENT_ORIGINATING_DEVICE_ENERGY_SERVICE_INTERFACE    = 0x00,
  EMBER_ZCL_PREPAYMENT_ORIGINATING_DEVICE_IN_PREMISES_DISPLAY_DEVICE  = 0x02
} EmberAfPrepaymentOriginatingDevice;

// PrepaymentSupplyStatus
typedef enum {
  EMBER_ZCL_PREPAYMENT_SUPPLY_STATUS_SUPPLY_OFF        = 0x00,
  EMBER_ZCL_PREPAYMENT_SUPPLY_STATUS_SUPPLY_OFF_ARMED  = 0x01,
  EMBER_ZCL_PREPAYMENT_SUPPLY_STATUS_SUPPLY_ON         = 0x02
} EmberAfPrepaymentSupplyStatus;

// ReportingDirection
typedef enum {
  EMBER_ZCL_REPORTING_DIRECTION_REPORTED  = 0x00,
  EMBER_ZCL_REPORTING_DIRECTION_RECEIVED  = 0x01
} EmberAfReportingDirection;

// SignatureType
typedef enum {
  EMBER_ZCL_SIGNATURE_TYPE_RESERVED  = 0x00,
  EMBER_ZCL_SIGNATURE_TYPE_ECDSA     = 0x01
} EmberAfSignatureType;

#endif // __EMBER_AF_ENUMS__
