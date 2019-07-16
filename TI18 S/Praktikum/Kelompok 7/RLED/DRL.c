/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Evaluation
Automatic Program Generator
© Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 11/23/2014
Author  : Freeware, for evaluation and non-commercial use only
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 12.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*****************************************************/

#include <mega16.h>
#include <delay.h>
// Alphanumeric LCD Module functions
#include <alcd.h>

// Declare your global variables here
char kolom =0;
void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=1 State6=1 State5=1 State4=1 State3=1 State2=1 State1=1 State0=1 
PORTA=0xFF;
DDRA=0xFF;

// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTB=0x00;
DDRB=0x00;

// Port C initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0x00;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0x00;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=0xFF
// OC0 output: Disconnected
TCCR0=0x00;
TCNT0=0x00;
OCR0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=0xFF
// OC2 output: Disconnected
ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// INT2: Off
MCUCR=0x00;
MCUCSR=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// USART initialization
// USART disabled
UCSRB=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;

// ADC initialization
// ADC disabled
ADCSRA=0x00;

// SPI initialization
// SPI disabled
SPCR=0x00;

// TWI initialization
// TWI disabled
TWCR=0x00;

// Alphanumeric LCD initialization
// Connections specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTA Bit 0
// RD - PORTA Bit 1
// EN - PORTA Bit 2
// D4 - PORTA Bit 4
// D5 - PORTA Bit 5
// D6 - PORTA Bit 6
// D7 - PORTA Bit 7
// Characters/line: 8
lcd_init(16);
lcd_clear();
lcd_gotoxy(0,0);
lcd_putsf("");

while (1)
      {
      // Place your code here
      for (kolom=0; kolom<=15; kolom++){
      lcd_clear();
      lcd_gotoxy(1,0);
      lcd_putsf("SELAMAT DATANG");
      delay_ms(70);
      lcd_gotoxy(1,1);
      lcd_putsf("      DI      ");
      delay_ms(50);
      lcd_gotoxy(1,0);
      lcd_putsf("  AYAM GEPREK  ");
      delay_ms(70);
      lcd_gotoxy(1,1);
      lcd_putsf("    IBUNEH    ");
      delay_ms(60);
      lcd_gotoxy(1,0);
      lcd_putsf("    IBUNEH    ");
      delay_ms(50);
      lcd_gotoxy(1,1);
      lcd_putsf(" OPEN 24H/7/12");
      delay_ms(60);
      lcd_gotoxy(1,0);
      lcd_putsf(" SEDIA GEPREK :");
      delay_ms(30);
      lcd_gotoxy(1,1);
      lcd_putsf("");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("     BIASA     ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("   SUPER HOT   ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("    CHEESE     ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("   MOJARELLA   ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("     TIRAM     ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("  TERIYAQUEEN  ");
      delay_ms(40);                
      lcd_gotoxy(1,0);
      lcd_putsf("  PEMESANAN :  ");
      delay_ms(60);
      lcd_gotoxy(1,1);
      lcd_putsf("   LANGSUNG    ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("     GOJEK     ");
      delay_ms(40);
      lcd_gotoxy(1,1);
      lcd_putsf("   08132XXX    ");
      delay_ms(40);
      }
      }
}