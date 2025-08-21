#ifndef _APPCONF_HW60_PAS_H_
#define _APPCONF_HW60_PAS_H_

// This file defines the hardcoded PAS settings for HW60
//
// App to Use (10 = Custom)
#define APPCONF_APP_TO_USE				APP_CUSTOM

// Enable Permanent UART
//#define APPCONF_PERMANENT_UART_ENABLED 1

// --- PAS Settings ---
// Control Type
#define APPCONF_PAS_CTRL_TYPE               PAS_CTRL_TYPE_CADENCE

// Sensor Type
#define APPCONF_PAS_SENSOR_TYPE				PAS_SENSOR_TYPE_QUADRATURE

// PAS Max Current
#define APPCONF_PAS_CURRENT_SCALING 1.0

// Pedal RPM Start
#define APPCONF_PAS_PEDAL_RPM_START 10

// Pedal RPM End
#define APPCONF_PAS_PEDAL_RPM_END 120

// Invert Pedal Direction
#define APPCONF_PAS_INVERT_PEDAL_DIRECTION	false

// Sensor Magnets
#define APPCONF_PAS_MAGNETS 12

// Use Filter
#define APPCONF_PAS_USE_FILTER 1

// Positive Ramping Time
#define APPCONF_PAS_RAMP_TIME_POS 0.5

// Negative Ramping Time
#define APPCONF_PAS_RAMP_TIME_NEG 0.3

// Update Rate
#define APPCONF_PAS_UPDATE_RATE_HZ 500

#endif