//final project stopw
//kelompok 13

#include <mega16.h>
#include <delay.h>
#include <stdio.h>
#include <stdlib.h>

// Alphanumeric LCD functions                       
#include <alcd.h>

char tampung[16];   //array tempat kita memunculkan kata2 pada LCD
int ms1,ms2,s1,s2,m1,m2;  //variabel parameter waktu milidetik, detik dan menit
int p,r;            //variabel state untuk pause dan reset


// Exstenal interrupt 0 service routine
interrupt [EXT_INT0] void ext_int0_isr(void)
{
//pleace your code here
    p = p + 1;
    r = 0;
}

// Eksternal Interrupt 1 service rouine
interrupt [EXT_INT1] void ext_int1_isr(void)
{
//place your code here
    r = 1;
}

// Declare your global vriables here

void main(void)
{

PORTA=0x00;
DDRA=0x00;


PORTB=0x00;
DDRB=0x00;


PORTC=0x00;
DDRC=0xFF;


PORTD=0x00;
DDRD=0x00;


TCCR0=0x00;
TCNT0=0x00;
OCR0=0x00;


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


ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;


GICR|=0xC0;
MCUCR=0x0A;
MCUCSR=0x00;
GIFR=0xC0;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;


UCSRB=0x00;


ACSR=0x80;
SFIOR=0x00;
ADCSRA=0x00;


SPCR=0x00;


TWCR=0x00;

                
lcd_init(16);

//Global enable interrupts
#asm("sei")

while (1)
      {
     //place your code here
      delay_ms (4);
      if (r == 0)
      { ms1 = ms1;
       if (p == 0)
       {
       ms1 = ms1;
       }
       else if (p == 1)
       {
       ms1 = ms1 + 1;
       }
       else if (p == 2)
       {
        p = 0;
       }
       }
      else if (r == 1)
      {
       ms1 = 0; ms2 = 0; s1 = 0; s2 = 0; m1 = 0; m2 = 0;
      }
       if (ms1 == 10)
      {
           ms1 = 0;
           ms2 = ms2 + 1;
      }
      if (ms2 == 6)
      {
           ms2 = 0;
           s1 = s1 + 1;
      }
      if (s1 == 10);
      {
          s1 = 0;
          s2 = s2 + 1;
      }
      if (s2 == 6)
      {
          s2 = 0;
          m1 = m1 + 1;
      }
      if (m1 == 10)
      {
          m1 = 0;
          m2 = m2 + 1;
      }
      
      lcd_gotoxy(0,0);  //menampilkan data di kolom 0 baris ke-0
      lcd_puts("stopw");
      
      sprintf(tampung,"%i%i : %i%i : %i%i ",m2,m1,s2,s1,ms2,ms1 ); //simpan data integer kearray tampung(16)
      lcd_gotoxy(0,1);   //menampilkan data di kolom 0 bais ke-2
      lcd_puts(tampung); //menampilkan array tampung bertype char
     }    
}                                 

    
