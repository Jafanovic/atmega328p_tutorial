/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_NANO = LED_BUILTIN;

int led2_a = 6;
int led2_b = 7;
int led2_c = 8;
int led2_d = 5;
int led2_e = 4;
int led2_f = PIN_A5;
int led2_g = PIN_A4;
int led2_dp = 9;

int led1_a = 12;
int led1_b = PIN_A3;
int led1_c = 2;
int led1_e = 11;
int led1_d = 10;
int led1_f = PIN_A2;
int led1_g = PIN_A1;
int led1_dp = 3;




// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_NANO,  OUTPUT);
  
  pinMode(led2_a,  OUTPUT);  
  pinMode(led2_b,  OUTPUT);     
  pinMode(led2_c,  OUTPUT); 
  pinMode(led2_d,  OUTPUT);
  pinMode(led2_e,  OUTPUT); 
  pinMode(led2_f,  OUTPUT); 
  pinMode(led2_g,  OUTPUT);
  pinMode(led2_dp, OUTPUT); 

  //pinMode(led1_a,  OUTPUT);
  //pinMode(led1_b,  OUTPUT);
  //pinMode(led1_c,  OUTPUT);
  pinMode(led1_d,  OUTPUT); 
  //pinMode(led1_e,  OUTPUT); 
  //pinMode(led1_f,  OUTPUT); 
  //pinMode(led1_g,  OUTPUT); 
  //pinMode(led1_dp, OUTPUT);
   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_NANO, HIGH); 
  
  digitalWrite(led2_a, HIGH);
  digitalWrite(led2_b, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2_c, HIGH);
  digitalWrite(led2_d, HIGH);
  digitalWrite(led2_e, HIGH);
  digitalWrite(led2_f, HIGH);
  digitalWrite(led2_g, HIGH);
  digitalWrite(led2_dp, HIGH);

  //digitalWrite(led1_a, HIGH);
  //digitalWrite(led1_b, HIGH);
  //digitalWrite(led1_c, HIGH);
  digitalWrite(led1_d, HIGH);
  //digitalWrite(led1_e, HIGH);
  //digitalWrite(led1_f, HIGH);
  //digitalWrite(led1_g, HIGH);
  //digitalWrite(led1_dp, HIGH);
  
  
  delay(1000);               // wait for a second
  digitalWrite(led_NANO, LOW);

  digitalWrite(led2_a, LOW); 
  digitalWrite(led2_b, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2_c, LOW);
  digitalWrite(led2_d, LOW);
  digitalWrite(led2_e, LOW);
  digitalWrite(led2_f, LOW);
  digitalWrite(led2_g, LOW);
  digitalWrite(led2_dp, LOW);

  //digitalWrite(led1_a, LOW);
  //digitalWrite(led1_b, LOW);
  //digitalWrite(led1_c, LOW);
  digitalWrite(led1_d, LOW);
  //digitalWrite(led1_e, LOW);
  //digitalWrite(led1_f, LOW);
  //digitalWrite(led1_g, LOW);
  //digitalWrite(led1_dp, LOW);
  
  delay(1000);               // wait for a second
}