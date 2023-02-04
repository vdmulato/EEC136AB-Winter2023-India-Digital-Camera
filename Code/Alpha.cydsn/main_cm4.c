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

void channel(int in){
switch (in)
{
    case 0:
   Cy_GPIO_Write(S0_PORT,S0_NUM,0);
   Cy_GPIO_Write(S1_PORT,S1_NUM,0);
 Cy_GPIO_Write(S2_PORT,S2_NUM,0);
 Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
    case 1:
     Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 2:
     Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 3:
     Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 4:
    Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 5:
    Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 6:
     Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 7:
    Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
    Cy_GPIO_Write(S3_PORT,S3_NUM,0);
    break;
     case 8:
    Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 9:
     Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
   Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 10:
    Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 11:
     Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,0);
    Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 12:
    Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
   Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 13:
     Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,0);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
    Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 14:
     Cy_GPIO_Write(S0_PORT,S0_NUM,0);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
   Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
     case 15:
    Cy_GPIO_Write(S0_PORT,S0_NUM,1);
     Cy_GPIO_Write(S1_PORT,S1_NUM,1);
     Cy_GPIO_Write(S2_PORT,S2_NUM,1);
  Cy_GPIO_Write(S3_PORT,S3_NUM,1);
    break;
}

}

int main(void)
{    
    __enable_irq(); /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */   
    UART_Start();
    ADC_1_Init();
    ADC_1_Start();
    ADC_1_StartConvert();
    setvbuf(stdin, NULL,_IONBF,0);  
    Cy_GPIO_Write(Mux_en_PORT,Mux_en_NUM,0);
     float voltagereading,actualValue; 
    int states[4];
   int a =0;
    for(;;) 
    {       
        //FILE *fp;
        //fp = fopen("readings.txt", "w");
        //if (fp == NULL) {
        //printf("Could not open file");
       
    //}else {
    //    printf("file created succesfully");
    //}
        ADC_1_StartConvert();
         ADC_1_IsEndConversion(1);      
        if(Cy_GPIO_Read(Button_0_PORT,Button_0_NUM)==0){            
           for(a=0;a<4;a++){  
            
            channel(a);
            states[0] = Cy_GPIO_ReadOut(S0_PORT,S0_NUM);
            states[1] = Cy_GPIO_ReadOut(S1_PORT,S1_NUM),
            states[2] = Cy_GPIO_ReadOut(S2_PORT,S2_NUM),
            states[3] = Cy_GPIO_ReadOut(S3_PORT,S3_NUM); 
             CyDelay(300);
            actualValue = ADC_1_GetResult16(0);     
            printf("Channel #%d, Binary = %d%d%d%d \n\r",a,states[3],states[2],states[1],states[0]);   
            printf("ADC VALUE = %f\r\n",actualValue);         
            voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
            printf("volts = %fv \n\r",voltagereading); 
            printf(" \n\r");
            CyDelay(50);
         }
        
            //  if(a<3){
             //   a=a+1;
           // }else{
           //     a=0;
           // }
    CyDelay(100);
           // }
        } 
        
        
 }
}
/* [] END OF FILE */
