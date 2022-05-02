
#define _XTAL_FREQ 20000000

#include <xc.h>
int last0,last1,last2,last3,last4,last5,last6,last7;
// BEGIN CONFIG
#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)
//END CONFIG
void UART_RX_Init(void);
int UART_Read(void);
// Globals
int UART_Buffer = 0;

  void UART_Write(int data)
{
  while(!TRMT);
  TXREG = data;
}
 
int UART_TX_Empty()
{
  // Check the output (transmitter) buffer emptiness
  return TRMT;
}
int main()
{
    
    PORTD=0x00;
  TRISB = 0xff; //RB0 as Output PIN
  TRISD=0x00;
  TRISC6=0;
  TRISC7=1;
  TRISC3=0;
  BRGH = 1; // Set For High-Speed Baud Rate
  SPBRG = 129; // Set The Baud Rate To Be 9600 bps
  //--[ Enable The Ascynchronous Serial Port ]--
  SYNC = 0;
  SPEN = 1; 
  RCIE = 1;  // UART Receving Interrupt Enable Bit
PEIE = 1;  // Peripherals Interrupt Enable Bit
GIE = 1;
  //--[ Set The RX-TX Pins to be in UART mode (not io) ]--
  
  TXEN = 1; // Enable UART Transmission
  
	
CREN = 1;
  
RC3=0;
 
  while(1){
      
 
     //000 
   while(RB0==0 && last0==0)
    {  __delay_ms(250);
        if(RB0==1)
        {
      RC3=1;    
            UART_Write('1');
            RD0=1;
            __delay_ms(100);
       
            RC3=0;
         //


        
 last0=1;
        
        }
    }

    while(RB0==0 && last0==1)
    {
        __delay_ms(250);
        if(RB0==1){

            
            RC3=1;
            RD0=0;
            UART_Write('0');
            __delay_ms(100);
       
            RC3=0;
           
           
        last0=0;
        }}
  //111
  while(RB1==0 && last1==0)
    {  __delay_ms(250);
        if(RB1==1)
        {
            RC3=1;
            RD1=1;
            UART_Write('4');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last1=1;
        
        }

    }

    while(RB1==0 && last1==1)
    {
        __delay_ms(250);
        if(RB1==1){

            
            RC3=1;
            RD1=0;
            UART_Write('3');
        __delay_ms(100);
        RC3=0;
           
           
        last1=0;
        }
  
   }
   
   
   //22222
   while(RB2==0 && last2==0)
    {  __delay_ms(250);
        if(RB2==1)
        {
            RC3=1;
            RD2=1;
            UART_Write('6');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last2=1;
        
        }

    }

    while(RB2==0 && last2==1)
    {
        __delay_ms(250);
        if(RB2==1){

            
            RC3=1;
            RD2=0;
            UART_Write('5');
        __delay_ms(100);
        RC3=0;
           
           
        last2=0;
        }
  
   }
   //3333
   
   while(RB3==0 && last3==0)
    {  __delay_ms(250);
        if(RB3==1)
        {
            RC3=1;
            RD3=1;
            UART_Write('8');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last3=1;
        
        }

    }

    while(RB3==0 && last3==1)
    {
        __delay_ms(250);
        if(RB3==1){

            
            RC3=1;
            RD3=0;
            UART_Write('7');
        __delay_ms(100);
        RC3=0;
           
           
        last3=0;
        }
  
   }
   
   //444
   
      while(RB4==0 && last4==0)
    {  __delay_ms(250);
        if(RB4==1)
        {
            RC3=1;
            RD4=1;
            UART_Write('a');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last4=1;
        
        }

    }

    while(RB4==0 && last4==1)
    {
        __delay_ms(250);
        if(RB4==1){

            
            RC3=1;
            RD4=0;
            UART_Write('9');
        __delay_ms(100);
        RC3=0;
           
           
        last4=0;
        }
  
   }
   
   //555
   
      while(RB5==0 && last5==0)
    {  __delay_ms(250);
        if(RB5==1)
        {
            RC3=1;
            RD5=1;
            UART_Write('c');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last5=1;
        
        }

    }

    while(RB5==0 && last5==1)
    {
        __delay_ms(250);
        if(RB5==1){

            
            RC3=1;
            RD5=0;
            UART_Write('b');
        __delay_ms(100);
        RC3=0;
           
           
        last5=0;
        }
  
   }
   //666
   
   
      while(RB6==0 && last6==0)
    {  __delay_ms(250);
        if(RB6==1)
        {
            RC3=1;
            RD6=1;
            UART_Write('e');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last6=1;
        
        }

    }

    while(RB6==0 && last6==1)
    {
        __delay_ms(250);
        if(RB6==1){

            
            RC3=1;
            RD6=0;
            UART_Write('d');
        __delay_ms(100);
        RC3=0;
           
           
        last6=0;
        }
  
   }
   //7777
   
   
      while(RB7==0 && last7==0)
    {  __delay_ms(250);
        if(RB7==1)
        {
            RC3=1;
            RD7=1;
            UART_Write('g');
       
            __delay_ms(100);
       
            RC3=0;
           
         //


         last7=1;
        
        }

    }

    while(RB7==0 && last7==1)
    {
        __delay_ms(250);
        if(RB7==1){

            
            RC3=1;
            RD7=0;
            UART_Write('f');
        __delay_ms(100);
        RC3=0;
           
           
        last7=0;
        }
  
   } 
   
   
   
}
  return 0;
}
void __interrupt() ISR (void)
{
   
    RC3=0;
    //00000
  if (RCIF == 1)
  {
  // Read The Received Data Buffer
     // Display The Received Data On LEDs
   if(RCREG=='1')
    {
        RD0=1;
     last0=1; 
    }
    
    
   
   else if(RCREG=='0')
    {
        RD0=0;
        last0=0;
    }
   //1111
      if(RCREG=='4')
    {
        RD1=1;
     last1=1;  
    }
    
    
   
   else if(RCREG=='3')
    {
        RD1=0;
  last1=0;
    }
   ///2222
     if(RCREG=='6')
    {
         
        RD2=1;
        last2=1;
    }
    
    
   
   else if(RCREG=='5')
    {
        RD2=0;
   last2=0;
    }
   
   //3333
     if(RCREG=='8')
    {
        RD3=1;
       last3=1;
    }
    
    
   
   else if(RCREG=='7')
    {
        RD3=0;
   last3=0;
    }
   
   //4444
   
     if(RCREG=='a')
    {
        RD4=1;
        last4=1; 
    }
    
    
   
   else if(RCREG=='9')
    {
        RD4=0;
 last4=0;
    }
   
   
   //555
     if(RCREG=='c')
    {
        RD5=1;
        last5=1; 
    }
    
    
   
   else if(RCREG=='b')
    {
        RD5=0;
   last5=0;
    }
   
   //66666
     if(RCREG=='e')
    {
        RD6=1;
        last6=1;
    }
    
    
   
   else if(RCREG=='d')
    {
        RD6=0;
    last6=0;
    }
   
   
   //77777
      if(RCREG=='g')
    {
        RD7=1;
         last7=1;
    }
    
    
   
   else if(RCREG=='f')
    {
        RD7=0;
        last7=0;
    }
   
    
    
    RCIF = 0; // Clear The Flag
  }
}