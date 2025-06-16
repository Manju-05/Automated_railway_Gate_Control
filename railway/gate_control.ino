#include <Servo.h>

const int irSensor1 = 12;  
const int irSensor2 = 13;  
const int redLED = 2;     
const int greenLED = 3;   
const int buzzer = 5;     
const int servoPin = 9;    

Servo gateServo;  

void setup() {
    pinMode(irSensor1, INPUT);
    pinMode(irSensor2, INPUT);
    pinMode(redLED, OUTPUT);
    pinMode(greenLED, OUTPUT);
    pinMode(buzzer, OUTPUT);
    gateServo.attach(servoPin);
    gateServo.write(90); 
    Serial.begin(9600);
    Serial.println("Automatic Railway Gate Control Initialized 🚦");
    Serial.println("Waiting for train detection...");
}

void loop() {
    int trainDetectedEntry = digitalRead(irSensor1);
    int trainDetectedExit = digitalRead(irSensor2);

    if (trainDetectedEntry == LOW) {  
        Serial.println("\n[ALERT] Train Approaching! 🚆");
        Serial.println("STOP! Closing gate...");
        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        tone(buzzer, 1000); 
        delay(2000); 
        noTone(buzzer); 
        gateServo.write(0); 
        Serial.println("Gate Closed! Train passing... 🚧");
    }

    if (trainDetectedExit == LOW) {  
        Serial.println("\nTrain Passed! Opening gate..."); 
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);
        tone(buzzer, 1500); 
        delay(2000);
        noTone(buzzer); 
        gateServo.write(90); 
        Serial.println("Gate Open! Road is clear.");
    }
}
