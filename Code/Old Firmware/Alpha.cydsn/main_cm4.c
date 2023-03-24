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
    __enable_irq(); 
    // Enable UART and ADC
    UART_Start();
    ADC_1_Init();
    ADC_1_Start();
    ADC_1_StartConvert();
    setvbuf(stdin, NULL,_IONBF,0); 
    // Variables for ADC values
    float voltagereading,actualValue; 
    int r = 0;
    int c = 0; 
    int count = 0;
    for(;;) 
    {       
        ADC_1_StartConvert();
         ADC_1_IsEndConversion(1);      
        // This code is a test for the beta prototype.
        // When presssing the button we are going to select 1 pixel from the array.
        // On this first test we only have 4 pixels that is 2 rows and 2 columns.
        if(Cy_GPIO_Read(Button_0_PORT,Button_0_NUM)==0){           
            switch (count){
                case 7:
                // selecting pixel 0
                r = 0;
                c = 7;
                break;
                case 6: 
                 // selecting pixel 1
                r = 1;
                c = 6;
                break;
                case 5: 
                 // selecting pixel 2
                r = 2;
                c = 5;
                break;
                case 4:
                 // selecting pixel 3
                r = 3;
                c = 4;
                break;
                 case 3:
                 // selecting pixel 3
                r = 4;
                c = 3;
                break;
                 case 2:
                 // selecting pixel 3
                r = 5;
                c = 2;
                break;
                 case 1:
                 // selecting pixel 3
                r = 6;
                c = 1;
                break;
                 case 0:
                 // selecting pixel 3
                r = 7;
                c = 0;
                break;
            }      
            rowselect(r);
            columnselect(c);
            states();
            actualValue = ADC_1_GetResult16(0);
            voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
            printf("row #%d, Binary = %d%d%d%d \n\r",r,row[3],row[2],row[1],row[0]);   
            printf("column #%d, Binary = %d%d%d%d \n\r",c,column[3],column[2],column[1],column[0]);
            printf("ADC VALUE = %f\r\n",actualValue);             
            printf("volts = %fv \n\r",voltagereading); 
            printf(" \n\r");
            CyDelay(100);
            if(count == 7){
                count = 0;
            }else{
             count = count +1;
            }
           // rowselect(r);
          //  columnselect(c);
          // states();
           CyDelay(200);
        }        
 }
}
/* [] END OF FILE */
