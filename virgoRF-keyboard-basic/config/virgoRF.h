// left hand pins

#define C01 25
#define C02 27
#define C03 29
#define C04 31
#define C05 3

#define R01 20
#define R02 18
#define R03 16
#define R04 14

#ifdef COMPILE_LEFT
#define PIPE_NUMBER 0
#endif

#ifdef COMPILE_RIGHT
#define PIPE_NUMBER 1
#endif

#define COLUMNS 5
#define ROWS 4

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source = NRF_CLOCK_LF_SRC_XTAL,										\
																 .rc_ctiv = 0,																			\
																 .rc_temp_ctiv = 0,																	\
																 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}
