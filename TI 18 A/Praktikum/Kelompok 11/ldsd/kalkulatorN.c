#include <mega8535.h>
#include <stdio.h> //instruksi khusus untuk penyimpanan sementara pada RAM data yang ditampilkan LCD


#asm 
   .equ __lcd_port=0x15;PORTC

#endasm
#include <lcd.h>

int key=20,step,op,a,b,c;//int tipe data,deklarasi variabel
char buff[33];//tipe data char dan penampung data 33 karakter

unsigned char keypad()  //menyiapkan variabel penyimpan data pada RAM
 {
    PORTB=0b11111110;
    if(PINB.7==0) {key=10;goto run;}   //bagi
    if(PINB.6==0) {key=9;goto run;}
    if(PINB.5==0) {key=8;goto run;}
    if(PINB.4==0) {key=7;goto run;}
                                    
    PORTB=0b11111101;
    if(PINB.7==0) {key=11;goto run;}   //kali
    if(PINB.6==0) {key=6;goto run;}
    if(PINB.5==0) {key=5;goto run;}
    if(PINB.4==0) {key=4;goto run;}   
    
    PORTB=0b11111011;
    if(PINB.7==0) {key=12;goto run;}   //kurang
    if(PINB.6==0) {key=3;goto run;}
    if(PINB.5==0) {key=2;goto run;}
    if(PINB.4==0) {key=1;goto run;}

    
    PORTB=0b11110111;
    if(PINB.7==0) {key=13;goto run;} //tambah
    if(PINB.6==0) {key=14;goto run;} // sama dengan atau enter
    if(PINB.5==0) {key=0;goto run;}
    if(PINB.4==0) {key=15;goto run;}  //ON atau cancel

    run:
    return key;
 }

void main (void)
 {
    PORTB=0xF0;
    DDRB=0x0F;
    
    lcd_init(16);  //maksimum 16 digit
    while(1)
    {
        if(step==0)
        {
            key=keypad();
            if(key<10)
            {  
                a=key;
                lcd_gotoxy(0,0);
                sprintf(buff,"%d",a);
                lcd_puts(buff);
                step=1;
            }
            else step=0;
        }    
        
         
        if(step==1)
        {
            key=keypad();
            if(key == 10)
            {
                op=4; //Bagi
                sprintf(buff,"/");
                lcd_puts(buff); 
                step = 2;
            }
            if(key == 11)
            {
                op=3; //Kali
                sprintf(buff,"*");
                lcd_puts(buff);
                step = 2;
            }
            if(key == 12)
            {
                op=2; //Kurang
                sprintf(buff,"-");
                lcd_puts(buff);
                step = 2;
            }
            if(key == 13)
            {
                op=1; //Tambah
                sprintf(buff,"+");
                lcd_puts(buff);
                step = 2;
            }
        }
        if(step == 2)
        {
            key=keypad();
            if(key < 10)
            {
                b=key;
                sprintf(buff,"%d ",b);
                lcd_puts(buff);
                step = 3;
            }
            else step=2;
        }
        if(step == 3)
        {
            if(op == 1)
            {   
                c=a+b;
                key=keypad();
                if(key==14)
                {
                    sprintf(buff,"= %d ",c);
                    lcd_puts(buff); 
                    step =4;
                }
                else step=3;
                
            }
            if(op==2)
            {
                c=a-b;
                key=keypad();
                if(key==14) 
                {
                    sprintf(buff,"= %d ",c);
                    lcd_puts(buff); 
                    step =4;  
                }
                else step=3;
            }   
            if(op==3)
            {
                c=a*b;     
                key=keypad();
                if(key==14)
                {
                    sprintf(buff,"= %d ",c);
                    lcd_puts(buff); 
                    step =4;
                }
                else step=3;
            }
            if(op==4)
            {
                c=a/b;
                key=keypad();
                if(key==14)
                {
                sprintf(buff,"= %d ",c);
                lcd_puts(buff); 
                step =4;
                }
                else step=3;
            }   
        }  
        
           
          if(step ==4)
        {
            key=keypad();
            if(key == 15)
            {
                lcd_clear();
                step = 0;
            }
            else step=4;
        }
    };
 }
