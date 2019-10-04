/*
   Joe's Random Blink Code
   Shoel3ssJoe Oct 4th 2019
 */



int clk = 4;
int inp = 3;
int outputEn = 0;
int leEn = 1;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(inp, OUTPUT);
  pinMode(outputEn, OUTPUT);
  pinMode(leEn, OUTPUT);
  pinMode(clk, OUTPUT);
  
  digitalWrite(outputEn, LOW);
  digitalWrite(leEn, HIGH);
  randomSeed(analogRead(2));
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  if (random(2)){
    
    digitalWrite(inp, HIGH);
  } 
  else
  {
    digitalWrite(inp, LOW);// turn the LED on (HIGH is the voltage level)
  }
  
  delay(100);              
  digitalWrite(clk, LOW);    /
  delay(100);
  digitalWrite(clk,HIGH);
  // wait for a second
}
