/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

int main(void)
{    
    __enable_irq(); /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */   
    UART_Start();
    ADC_1_Init();
    ADC_1_Start();
    ADC_1_StartConvert();
    setvbuf(stdin, NULL,_IONBF,0);  
     float voltagereading,actualValue; 
    for(;;) 
    {              
        ADC_1_StartConvert();
         ADC_1_IsEndConversion(1);
        // Getting the value from channel 0
            actualValue = ADC_1_GetResult16(0);
              printf("ADC VALUE = %f\r\n",actualValue);         
                    voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
                        printf("volts = %fv \n\r",voltagereading);
    CyDelay(100);
 }
}
/* [] END OF FILE */
