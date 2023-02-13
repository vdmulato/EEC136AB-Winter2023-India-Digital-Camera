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
// Controls the channels
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
    setvbuf(stdin, NULL,_IONBF,0);  
    //enable the multiplexer sending a signal to the enable pin this is active-low
    Cy_GPIO_Write(Mux_en_PORT,Mux_en_NUM,0);
    int numberin = 0;
    int states[4];
    
    for(;;) {
        //for(int a=0;a<=1;a++){
               //Button is active-low
        if(Cy_GPIO_Read(Button_0_PORT,Button_0_NUM)==0){          
            channel(numberin);
            states[0] = Cy_GPIO_ReadOut(S0_PORT,S0_NUM);
            states[1] = Cy_GPIO_ReadOut(S1_PORT,S1_NUM),
            states[2] = Cy_GPIO_ReadOut(S2_PORT,S2_NUM),
            states[3] = Cy_GPIO_ReadOut(S3_PORT,S3_NUM); 
            printf("Channel #%d, Binary = %d%d%d%d \n\r",numberin,states[3],states[2],states[1],states[0]);
            CyDelay(500);           
            if(numberin>=5){
                numberin = 0; 
            }else{
                numberin = numberin + 1; 
            }
            
           } 
       // }
     

 }
}
/* [] END OF FILE */
