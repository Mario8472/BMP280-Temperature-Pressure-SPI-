#ifndef BMP280_SPI_H_
#define BMP280_SPI_H_

/*********************************INCLUDES******************************************/
#include "stm32f0xx_hal.h"    // STM32F0 - Discovery


/**********************************DEFINES******************************************/
#define BMP280_ADDR							0x76

#define SLEEP_MODE							0x00
#define FORCED_MODE							0x01
#define NORMAL_MODE							0x03

#define STDBY_HALF_MS						0x00
#define STDBY_62_AND_HALF_MS	 	0x01
#define STDBY_125_MS						0x02
#define STDBY_250_MS						0x03
#define STDBY_500_MS						0x04
#define STDBY_1_SEC							0x05
#define STDBY_2_SEC							0x06
#define STDBY_4_SEC 						0x07		

#define TEMP_STOP								0x00
#define TEMP_16_BIT							0x01
#define TEMP_17_BIT							0x02
#define TEMP_18_BIT							0x03
#define TEMP_19_BIT							0x04
#define TEMP_20_BIT							0x05

#define PRESS_STOP							0x00
#define PRESS_16_BIT						0x01
#define PRESS_17_BIT						0x02
#define PRESS_18_BIT						0x03
#define PRESS_19_BIT						0x04
#define PRESS_20_BIT						0x05

// Masks
#define POWER_MODE_MASK					0xFC
#define STDBY_TIME_MASK					0x1F
#define TEMP_MASK								0x1F
#define PRESS_MASK							0xE3
/*********************************STRUCTURES****************************************/


/******************************EXTERN VARIABLES*************************************/


/****************************FUNCTION PROTOTYPES************************************/
float bmp280_SPI_temp_calculation(int adc_T);
float bmp280_SPI_pressure_calculation(int adc_P);
void set_power_mode(uint8_t mode);
void set_stdby_time(uint8_t time);
void set_temp_resolution(uint8_t t_samp);
void set_pressure_resolution(uint8_t p_samp);
uint32_t get_raw_temp();
uint32_t get_raw_press();


#endif /* BMP280_SPI_H_ */
