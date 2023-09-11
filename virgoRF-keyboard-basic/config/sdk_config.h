#ifndef SDK_CONFIG_H
#define SDK_CONFIG_H

#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 0
#endif

#ifndef POWER_ENABLED
#define POWER_ENABLED 0
#endif

#ifndef NRF_CLOCK_ENABLED
#define NRF_CLOCK_ENABLED 1
#endif
 
// <0=> RC 
// <1=> XTAL 
// <2=> Synth 
// <131073=> External Low Swing 
// <196609=> External Full Swing 
#ifndef CLOCK_CONFIG_LF_SRC
#define CLOCK_CONFIG_LF_SRC 1
#endif

// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 
#ifndef CLOCK_CONFIG_IRQ_PRIORITY
#define CLOCK_CONFIG_IRQ_PRIORITY 6
#endif

/* RTC */
#ifndef NRFX_RTC_ENABLED
#define NRFX_RTC_ENABLED 0
#endif

#ifndef RTC_ENABLED
#define RTC_ENABLED 1
#endif

#ifndef RTC0_ENABLED //handler_maintenance
#define RTC0_ENABLED 1
#define RTC0_CONFIG_FREQUENCY	 8
#define RTC0_CONFIG_IRQ_PRIORITY 6
#define RTC0_CONFIG_RELIABLE     false
#endif

#ifndef RTC1_ENABLED //handler_debounce
#define RTC1_ENABLED 1
#define RTC1_CONFIG_FREQUENCY    1000 //1ms
#define RTC1_CONFIG_IRQ_PRIORITY 6
#define RTC1_CONFIG_RELIABLE     false
#endif

#ifndef RTC2_ENABLED
#define RTC2_ENABLED 0
#endif

#endif //SDK_CONFIG_H