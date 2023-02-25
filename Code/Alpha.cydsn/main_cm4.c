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
int row[4];
int column[4];

void rowselect(int in){
switch (in)
{
    case 0:
   Cy_GPIO_Write(R0_PORT,R0_NUM,0);
   Cy_GPIO_Write(R1_PORT,R1_NUM,0);
 Cy_GPIO_Write(R2_PORT,R2_NUM,0);
 Cy_GPIO_Write(R3_PORT,R3_NUM,0);

    break;
    case 1:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
    Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    
    break;
     case 2:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
    Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    
    break;
     case 3:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
     Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    
    break;
     case 4:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    break;
     case 5:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    
    break;
     case 6:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,0);

    break;
     case 7:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,0);
    
    break;
     case 8:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
     Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    
    break;
     case 9:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
     Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    
    break;
     case 10:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
     Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    
    break;
     case 11:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,0);
    Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    
    break;
     case 12:
    Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
   Cy_GPIO_Write(R3_PORT,R3_NUM,1);

    break;
     case 13:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,0);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
    Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    
    break;
     case 14:
     Cy_GPIO_Write(R0_PORT,R0_NUM,0);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,1);

    break;
     case 15:
     Cy_GPIO_Write(R0_PORT,R0_NUM,1);
     Cy_GPIO_Write(R1_PORT,R1_NUM,1);
     Cy_GPIO_Write(R2_PORT,R2_NUM,1);
     Cy_GPIO_Write(R3_PORT,R3_NUM,1);
    break;
}
}


void columnselect(int in){
switch (in)
{
    case 0:
 Cy_GPIO_Write(C0_PORT,C0_NUM,0);
   Cy_GPIO_Write(C1_PORT,C1_NUM,0);
 Cy_GPIO_Write(C2_PORT,C2_NUM,0);
 Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
    case 1:
    
    Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
    Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 2:
   
    Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
    Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 3:
   
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
     Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 4:
  
     Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 5:
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 6:
    
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 7:
     
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,0);
    break;
     case 8:
    
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
     Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
     case 9:
    
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
     Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
     case 10:
    
     Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
     Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
     case 11:
    
    Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,0);
    Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
     case 12:
  Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
   Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
     case 13: 
    Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,0);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
    Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    
    break;
     case 14:
     Cy_GPIO_Write(C0_PORT,C0_NUM,0);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,1);

    break;
     case 15:
     Cy_GPIO_Write(C0_PORT,C0_NUM,1);
     Cy_GPIO_Write(C1_PORT,C1_NUM,1);
     Cy_GPIO_Write(C2_PORT,C2_NUM,1);
     Cy_GPIO_Write(C3_PORT,C3_NUM,1);
    break;
}
}
void states(){
  row[0]    = Cy_GPIO_ReadOut(R0_PORT,R0_NUM);
  row[1]    = Cy_GPIO_ReadOut(R1_PORT,R1_NUM);
  row[2]    = Cy_GPIO_ReadOut(R2_PORT,R2_NUM);
  row[3]    = Cy_GPIO_ReadOut(R3_PORT,R3_NUM); 
  column[0] = Cy_GPIO_ReadOut(C0_PORT,R0_NUM);
  column[1] = Cy_GPIO_ReadOut(C1_PORT,R1_NUM);
  column[2] = Cy_GPIO_ReadOut(C2_PORT,R2_NUM);
  column[3] = Cy_GPIO_ReadOut(C3_PORT,R3_NUM); 
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
    float voltagereading,actualValue; 
    int a =0;
     
    for(;;) 
    {       
        ADC_1_StartConvert();
         ADC_1_IsEndConversion(1);      
        if(Cy_GPIO_Read(Button_0_PORT,Button_0_NUM)==0){             
              
           //for(a=0;a<6;a++){           
            rowselect(a);
            states();
            
            actualValue = ADC_1_GetResult16(0);
            voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
            
            printf("row #%d, Binary = %d%d%d%d \n\r",a,row[3],row[2],row[1],row[0]);   
            printf("column #%d, Binary = %d%d%d%d \n\r",a,column[3],column[2],column[1],column[0]);
            printf("ADC VALUE = %f\r\n",actualValue);             
            printf("volts = %fv \n\r",voltagereading); 
            printf(" \n\r");
            CyDelay(100);
            
             if(a==7){
                a = 0;
            }else{
                 a = a + 1;
            }
             
           
            
            rowselect(a);
            states();
           CyDelay(200);
        // voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
        } 
        
        
        
        
 }
}
/* [] END OF FILE */
