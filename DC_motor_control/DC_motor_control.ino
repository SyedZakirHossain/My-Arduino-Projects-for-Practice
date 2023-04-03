//This code is to control the speed of a DC motor by a potentiometer using l298n driver
//We read the value from the analog input, calibrate it then inject to the module

int in1 = 8;        //Declaring where our module is wired  
int in2 = 9;
int enA = 10;     // Don’t forget this is a PWM DI/DO   
int speed1;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);    
}



void loop() {


  digitalWrite(in1, LOW);            //Switch between this HIGH and LOW to change direction
  digitalWrite(in2, HIGH);
  speed1 = analogRead(A0);
  //speed1 = //speed1 * 0.2492668622;      //We read the analog value from the potentiometer calibrate it
  analogWrite(enA, speed1);            // Then inject it to our motor
}



                                 
