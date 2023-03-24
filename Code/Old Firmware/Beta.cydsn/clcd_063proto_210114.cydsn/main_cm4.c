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
#include "tty_utils.h"
#include "clcd.h"
#include "func_list.h"

void do_help(void) ;
void do_clear(void) ;
void do_write(void) ;
void do_SetDDRAddr(void) ;
void do_SetCGRAMAddr(void) ;
void do_Command(void) ;
void do_print(void) ;
void do_pos(void) ;

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

f_list_type main_func_list[] = {
    { "help",    do_help,          "show help message"   },
    { "clear",   do_clear,         "Clear LCD"           },
    { "write",   do_write,         "Write data to LCD"   },
    { "print",   do_print,         "Write string to LCD" },
    { "ddr",     do_SetDDRAddr,    "Set DDR Address"     },
    { "cg",      do_SetCGRAMAddr,  "Set CG RAM Address"  },
    { "command", do_Command,       "send instruction"    },
    { "pos",     do_pos,           "pos line col"        },
    {     0,     0,                0} /* list terminator */
} ;


int main(void)

{
    func_ptr func ;
    uint8_t data ;
    char cmd[32] ;
   
    int size; 
    size = 8;
    
    __enable_irq(); /* Enable global interrupts. */

    tty_init(USE_CM4) ;
    
    CLCD_Init() ;
    ADC_1_Init();
    ADC_1_Start();
    ADC_1_StartConvert();
   // splash("PSoC 6 CLCD Test\n") ;
    CySCB_Type *myUart = SCB5;
    float voltagereading;
    int actualValue;
    

    //CLCD_PutString("Welcome To Group India") ;
    
   
    
   // prompt("> ") ;
    for(;;)
    {
       
         
        
     
         //voltagereading = ADC_1_CountsTo_Volts(0,actualValue);
         //voltagereading = (int)voltagereading;
         
          
        
        if(Cy_GPIO_Read(P0_4_PORT, P0_4_NUM))
            {
                CLCD_PutString("Ready for Pic...") ;
            }
        else
            {
               CLCD_Clear();
               CLCD_PutString("Acquiring Pic...");
               int i, j;
                
               for(i = 0; i < size; i++)
            {
                rowselect(i);
                CyDelay(1);//Psoc is 6.7 ns; Mux needs 500 ns delay (THIS IS 1 ms)
                for(j=0; j<size; j++)
                { 
                        columnselect(j);
                        CyDelay(1); //Psoc is 6.7 ns; Mux is 500 ns delay (THIS IS 1 ms)
                        
                       // actualValue = ADC_1_GetResult16(0);
                        char myString[16];
                    
                        //adc data printed to UART
                        ADC_1_StartConvert();
                        ADC_1_IsEndConversion(1);
                        
                        actualValue = ADC_1_GetResult16(0);
                        sprintf(myString, "%d", actualValue);
                        printf("%s ", myString);
                        
                        UART_PutString(myString);
                        UART_PutString(" ");
                }
                
            }
               UART_PutString("e ");
               CLCD_Clear();
               CLCD_PutString("Done");
                
                CyDelay(100);
            }
        
    }
}

void do_help(void)
{
    show_help(main_func_list) ;
}

void do_clear(void) 
{
    CLCD_Clear() ;
}

void do_write(void) 
{
    int c ;
    sscanf(str, "%*s %x", &c) ;
    CLCD_WriteData(c & 0xFF) ;
}

void do_SetDDRAddr(void) 
{
    int addr ;
    sscanf(str, "%*s %x", &addr) ;
    CLCD_SetDDRAMAddr(addr) ;
}

void do_SetCGRAMAddr(void) 
{
    int addr ;
    sscanf(str, "%*s %x", &addr) ;
    CLCD_SetCGRAMAddr(addr) ;    
}

void do_Command(void) 
{
    int cmd ;
    
    sscanf(str, "%*s %x", &cmd) ;
    CLCD_WriteCommand(cmd) ;
}

void do_print(void)
{
    char buf[81] ;
    sscanf(str, "%*s %s", buf) ;
    CLCD_PutString(buf) ;
}

void do_pos(void)
{
    int line, col ;
    int addr ;
    sscanf(str, "%*s %d %d", &line, &col) ;
    if (line < 1) { 
        line = 1 ;
    }
    if (line > CLCD_NUM_ROWS) {
        line = CLCD_NUM_ROWS ;
    }
    if (col < 1) {
        col = 1 ;
    } 
    if (col > CLCD_NUM_COLS) {
        col = CLCD_NUM_COLS ;
    }
    addr = 0x40 * (line-1) + (col-1) ;
    CLCD_SetDDRAMAddr(addr) ;
}

/* [] END OF FILE */
