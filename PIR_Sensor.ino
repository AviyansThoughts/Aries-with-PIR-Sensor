// Welcome to Aviyan's Thoughts

int led1 = 22;               // Green LED
int led2 = 24;               // Red LED
int PIRSensor = 0;              // the pin that the sensor is atteched to GPIO-0 of Aries Board

void setup() {
  pinMode(led1, OUTPUT);      // initalize LED as an output
  pinMode(led2, OUTPUT);    
  pinMode(PIRSensor, INPUT);     // initialize sensor as an input
  Serial.begin(115200);       // initialize serial
}

void loop(){
  int val = digitalRead(PIRSensor);   // read sensor value
  if (val == HIGH) {           // check if the sensor is HIGH
    digitalWrite(led1, LOW);   // if motion detected turn (Green LED -> ON) and (Red LED -> OFF)
    digitalWrite(led2, HIGH);
  } 
  else {
      digitalWrite(led1, HIGH); // for no motion turn (Red LED -> ON) and (Green LED -> OFF) 
      digitalWrite(led2, LOW); 
    }
}
