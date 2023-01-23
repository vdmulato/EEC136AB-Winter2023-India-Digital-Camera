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
    for(;;) 
    {    
        float v1,v2;      
        ADC_1_StartConvert();
        ADC_1_IsEndConversion(1);
        printf("ADC VALUE = %d\r\n",ADC_1_GetResult16(0));
         int16_t reference = ADC_1_GetResult16(0);     
        v1 = ADC_1_CountsTo_Volts(0,reference);
    printf("volts = %fv \n\r",v1);
    CyDelay(100);
 }
}
/* [] END OF FILE */
