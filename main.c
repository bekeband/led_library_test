/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#include <p30Fxxxx.h>      /* Device header file                              */
#include <stdint.h>        /* Includes uint16_t definition                    */
#include <stdbool.h>       /* Includes true/false definition                  */

#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp              */
#include "../ELBAG_8873_LCD_LIBRARY.X/led.h"    /* LED library header */
/**/

/******************************************************************************/
/* Global Variable Declaration                                                */
/******************************************************************************/

/* i.e. uint16_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/

int16_t main(void)
{   int i;

    /* Configure the oscillator for the device */
    ConfigureOscillator();

    /* Initialize IO ports and peripherals */
    InitApp();

    /* TODO <INSERT USER APPLICATION CODE HERE> */

    for (i = 0; i < 10; i++)
    {
        LED_STATES[i].COLOR = RED;
        LED_STATES[i].STATE = OFF;
    }

//    LED_STATES[0].COLOR = RED;
    LED_STATES[9].STATE = ON;

    while(1)
    {

    }
}
