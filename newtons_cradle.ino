/*
really really bored
*/
const int led = 2;
const int magnet = 3;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(magnet, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);    //turn on LED
  digitalWrite(magnet, HIGH); //turn on electromagnet for 80ms  
  delay(80);                       
  digitalWrite(led, LOW);     //turn off LED
  digitalWrite(magnet, LOW);  //turn off electromagnet for 550ms  
  delay(550);                       
}
