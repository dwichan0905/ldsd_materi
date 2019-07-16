int LED1 = 13;
int LED2 = 11;
int LED3 = 9;
int DELAY_LED = 2750; //1detik = 1000ms

void setup() {
  // put your setup code here, to run once:
  
  pinMode(2,OUTPUT); 
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT); 
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT); 
  pinMode(8,OUTPUT);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED1, HIGH);
  //delay (DELAY_LED);
  //zero(); 
  one(); 
  two(); 
  three(); 
  four(); 
  five(); 
  six(); 
  seven(); 
  eight(); 
  nine();
  ten();
  digitalWrite (LED1, LOW);
  digitalWrite (LED2, HIGH);
  delay(1000);
  digitalWrite (LED2, LOW);
  digitalWrite (LED3, HIGH);
  //zero(); 
  one(); 
  two(); 
  three(); 
  four(); 
  five(); 
  six(); 
  seven(); 
  eight(); 
  nine();
  ten();
  //delay (DELAY_LED);
  digitalWrite (LED3, LOW);
  //digitalWrite (LED1, LOW);
  digitalWrite (LED2, HIGH);
  delay(1000);
  digitalWrite (LED2, LOW);
  //digitalWrite (LED3, HIGH);
}

void zero() { 
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,LOW); 
  delay(250);
  }

void one(){ 
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(250); 
  }

void two() { 
    digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(250);
  }

void three() {
    digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(250); 
  }

void four() { 
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,HIGH); 
  delay(250); 
  }
  

void five() { 
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,HIGH); 
  digitalWrite(6,LOW); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,HIGH); 
  delay(250); 
  }
  
  

void six() { 
  digitalWrite(2,LOW); 
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,LOW); 
  digitalWrite(6,LOW); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,HIGH); 
  delay(250); 
}
  

void seven() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(250);
  } 
  

void eight() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(250);
  } 

void nine() { 
  digitalWrite(2,LOW); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH); 
  digitalWrite(5,LOW); 
  digitalWrite(6,LOW); 
  digitalWrite(7,LOW); 
  digitalWrite(8,LOW); 
  delay(250); 
  }

void ten() { 
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,LOW); 
  delay(250);
  }
