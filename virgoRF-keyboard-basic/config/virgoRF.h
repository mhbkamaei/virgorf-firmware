// left hand pins

#define L_C01 25
#define L_C02 27
#define L_C03 29
#define L_C04 31
#define L_C05 3
#define L_R01 20
#define L_R02 18
#define L_R03 16
#define L_R04 14

#define L_MASK (1<<L_C01  | \
 				1<<L_C02  | \
				1<<L_C03  | \
				1<<L_C04  | \
				1<<L_C05

// right hand pins

#define R_C01 25
#define R_C02 27
#define R_C03 29
#define R_C04 31
#define R_C05 3
#define R_R01 20
#define R_R02 18
#define R_R03 16
#define R_R04 14

#define R_MASK (1<<R_C01  | \
 				1<<R_C02  | \
				1<<R_C03  | \
				1<<R_C04  | \
				1<<R_C05

#ifdef COMPILE_LEFT

#define PIPE_NUMBER 0

#define C01 L_C01
#define C02 L_C02
#define C03 L_C03
#define C04 L_C04
#define C05 L_C05
#define R01 L_R01
#define R02 L_R02
#define R03 L_R03
#define R04 L_R04

#define INPUT_MASK L_MASK

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define C01 R_C01
#define C02 R_C02
#define C03 R_C03
#define C04 R_C04
#define C05 R_C05
#define R01 R_R01
#define R02 R_R02
#define R03 R_R03
#define R04 R_R04

#define INPUT_MASK R_MASK

#endif

#define COLUMNS 5
#define ROWS 4

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source = NRF_CLOCK_LF_SRC_XTAL, .rc_ctiv = 0, .rc_temp_ctiv = 0, .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}