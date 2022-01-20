/*******************************/
/*** Created by Ovidiu Sabau ***/
/***	20th January 2022	 ***/
/*******************************/

#include <asf.h>
#include "SOC.h"
#include "LCD.h"


int main (void)
{
	/* Local variables */
	uint8_t soc = 0;
	uint8_t diag = 0;
	initLCD();
	
	while (1)
	{
		soc = getBatterySOC(&diag);
		displayLCD_main(1, "Battery soc: ", soc, " %");	
		displayLCD_main(2, "Battery DTC: ", diag, "NONE");	// Diagnostic i.e. low battery
		_delay_ms(1000);
	}
}
