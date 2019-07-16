/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Advanced

Project : papan skor puluhan
Version : 1.0
Date : 5/27/2013
Author : priyo harjiyono
Company : https://anotherorion.com
Comments: 
find more project at https://anotherorion.com or
follow at @anotherorion 

Chip type : ATmega16
Program type : Application
AVR Core Clock frequency: 4.001000 MHz
Memory model : Small
External RAM size : 0
Data Stack size : 256
*****************************************************/

#include <mega16.h>
#include <delay.h>
unsigned char bil[10]=
{0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
char ribu=0;
signed char ratus=0;
char puluh=0;
signed char satu=0;

void tampil (void)
{
 PORTD=0x01;
 PORTC=bil[ribu];
 delay_ms(2); 
 PORTD=0x02;
 PORTC=bil[ratus];
 delay_ms(2);
 PORTD=0x04;
 PORTC=bil[puluh] ;
 delay_ms(2);
 PORTD=0x08;
 PORTC=bil[satu] ;
 delay_ms(2);
}

void main(void)
{
DDRB=0x00;
PINB=0x00;
DDRC=0xff;
DDRD=0xff;
PORTC=0xc0;
PORTD=0xff;
delay_ms(2);
while(1)
{
 tampil();
{
if(PINB.0==0)
{
while(PINB.0==0){tampil();}
if(ratus==0 & ribu==0)
{ratus=0; ribu=0;} 
else{
 ratus=ratus-1;
 if(ratus<0)
 {
 ribu=ribu-1;
 ratus=9;
 }}}
else if(PINB.1==0)
{
while(PINB.1==0){ tampil();}
 ratus=ratus+1; 
 if(ratus>9)
 {
 ratus=0;
 ribu=ribu+1;
 }}
else if(PINB.2==0)
{
while(PINB.2==0){tampil();}
if(satu==0 & puluh==0)
{satu=0; puluh=0;} 
else{
 satu=satu-1; 
 if(satu<0)
 {
 puluh=puluh-1;
 satu=9;
 }}}
 else if(PINB.3==0)
{
while(PINB.3==0){ tampil();}
 satu=satu+1;
 if(satu>9)
 {
 satu=0; 
 puluh=puluh+1;
 }}
 else
 {}}}}