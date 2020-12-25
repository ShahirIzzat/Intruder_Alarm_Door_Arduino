const int trigPin = 3;
const int echoPin = 2;
float duration;
float distance;

void setup() 
{
  
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);

}

void loop() 
{

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = ((duration*(0.0343))/2);
delay(10);

if (distance < 50)
{
Serial.print("Welcome");
Serial.println(distance);

// turn off tone function for pin 8:
noTone(8);
// play a note on pin 6 for 200 ms:
tone(6, 440, 200);
delay(200);

// turn off tone function for pin 6:
noTone(6);
// play a note on pin 7 for 500 ms:
tone(7, 494, 500);
delay(500);

// turn off tone function for pin 7:
noTone(7);
// play a note on pin 8 for 300 ms:
tone(8, 523, 300);
delay(100);

}

else
{
Serial.println("No customer");

delay(10); 
}

}
