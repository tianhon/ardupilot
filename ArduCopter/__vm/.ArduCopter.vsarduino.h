/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 HAL (Apm 2), Platform=avr, Package=apm
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define ARDUINO 166
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus 201103L
#define GCC_VERSION 40302
#define ARDUINO_ARCH_AVR
#define ARDUINO_AVR_APM_APM_AVR_APM2_2560HAL
#define CONFIG_HAL_BOARD HAL_BOARD_APM2
#define EXCLUDECORE
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__
#define __AVR__
typedef void *__builtin_va_list;
#define __builtin_va_start
#define __builtin_va_end
//#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int

#define NEW_H
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <..\ArduCopter\ArduCopter.pde>
#include <..\ArduCopter\APM_Config.h>
#include <..\ArduCopter\APM_Config_mavlink_hil.h>
#include <..\ArduCopter\AP_State.pde>
#include <..\ArduCopter\Attitude.pde>
#include <..\ArduCopter\GCS_Mavlink.pde>
#include <..\ArduCopter\Log.pde>
#include <..\ArduCopter\Parameters.h>
#include <..\ArduCopter\Parameters.pde>
#include <..\ArduCopter\UserCode.pde>
#include <..\ArduCopter\UserVariables.h>
#include <..\ArduCopter\commands.pde>
#include <..\ArduCopter\commands_logic.pde>
#include <..\ArduCopter\compassmot.pde>
#include <..\ArduCopter\compat.h>
#include <..\ArduCopter\compat.pde>
#include <..\ArduCopter\config.h>
#include <..\ArduCopter\config_channels.h>
#include <..\ArduCopter\control_acro.pde>
#include <..\ArduCopter\control_althold.pde>
#include <..\ArduCopter\control_auto.pde>
#include <..\ArduCopter\control_autotune.pde>
#include <..\ArduCopter\control_circle.pde>
#include <..\ArduCopter\control_drift.pde>
#include <..\ArduCopter\control_flip.pde>
#include <..\ArduCopter\control_guided.pde>
#include <..\ArduCopter\control_land.pde>
#include <..\ArduCopter\control_loiter.pde>
#include <..\ArduCopter\control_ofloiter.pde>
#include <..\ArduCopter\control_poshold.pde>
#include <..\ArduCopter\control_rtl.pde>
#include <..\ArduCopter\control_sport.pde>
#include <..\ArduCopter\control_stabilize.pde>
#include <..\ArduCopter\crash_check.pde>
#include <..\ArduCopter\defines.h>
#include <..\ArduCopter\ekf_check.pde>
#include <..\ArduCopter\events.pde>
#include <..\ArduCopter\failsafe.pde>
#include <..\ArduCopter\fence.pde>
#include <..\ArduCopter\flight_mode.pde>
#include <..\ArduCopter\heli.h>
#include <..\ArduCopter\heli.pde>
#include <..\ArduCopter\heli_control_acro.pde>
#include <..\ArduCopter\heli_control_stabilize.pde>
#include <..\ArduCopter\inertia.pde>
#include <..\ArduCopter\land_detector.pde>
#include <..\ArduCopter\leds.pde>
#include <..\ArduCopter\motor_test.pde>
#include <..\ArduCopter\motors.pde>
#include <..\ArduCopter\navigation.pde>
#include <..\ArduCopter\perf_info.pde>
#include <..\ArduCopter\position_vector.pde>
#include <..\ArduCopter\radio.pde>
#include <..\ArduCopter\sensors.pde>
#include <..\ArduCopter\setup.pde>
#include <..\ArduCopter\switches.pde>
#include <..\ArduCopter\system.pde>
#include <..\ArduCopter\test.pde>
#endif
