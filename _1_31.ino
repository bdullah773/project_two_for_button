// C++ code
//

const int ledPin = 4;  // Pin for the LED  
const int buttonPin = 2;  // Pin for the pushbutton  
  
int buttonState = 0;  // Variable to store the button state  
int ledState = LOW;  // Variable to store the LED state  
int lastButtonState = LOW;  // Variable to store the last button state  
  
void setup() {  
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output  
  pinMode(buttonPin, INPUT);  // Set the button pin as an input  
}  
  
void loop() {  
  buttonState = digitalRead(buttonPin);  // Read the button state  
  
  if (buttonState == HIGH && lastButtonState == LOW) {  // If the button is pressed and was not pressed before  
   if (ledState == LOW) {  // If the LED is off  
    ledState = HIGH;  // Turn the LED on  
   } else {  // If the LED is on  
    ledState = LOW;  // Turn the LED off  
   }  
  }  
  
  lastButtonState = buttonState;  // Update the last button state  
  digitalWrite(ledPin, ledState);  // Set the LED state  
  
  delay(50);  // Debounce delay  
}























/*
const int ledPin = 13;  // Pin for the LED  
const int buttonPin = 2;  // Pin for the pushbutton  
  
int buttonState = 0;  // Variable to store the button state  
  
void setup() {  
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output  
  pinMode(buttonPin, INPUT);  // Set the button pin as an input  
}  
  
void loop() {  
  buttonState = digitalRead(buttonPin);  // Read the button state  
  
  if (buttonState == HIGH) {  // If the button is pressed  
   digitalWrite(ledPin, HIGH);  // Turn the LED on  
  } else {  // If the button is not pressed  
   digitalWrite(ledPin, LOW);  // Turn the LED off  
  }  
  
  delay(50);  // Debounce delay  
}





















/*const byte ledpin = 4;
const byte push = 2;
int ledstate = LOW;
int debouncedelay = 50;
int lastbuttonstate = LOW;
int buttonstate = LOW;
unsigned long lastdebonstime = 0;
void setup()
{
  pinMode(ledpin, OUTPUT);
   pinMode(ledpin, INPUT);
}

void loop()
{
  
  Button1();

}

void Button1()
{
  int readbutton = digitalRead(push);
  if(lastbuttonstate != readbutton)
  {
    lastdebonstime = millis();
  }
  if(millis() - lastdebonstime > debouncedelay)
  {
    if(buttonstate != readbutton)
    {
      buttonstate = readbutton;
      if(buttonstate = HIGH)
      {
        ledstate != ledstate;
      }
    }
  }
  digitalWrite(ledpin,ledstate);
  lastbuttonstate = readbutton;
}
  
/*void Button();
{
  int readbutton = digitalRead(push);
  if(readbutton == HIGH)
  {
    ledstate = !ledstate;
  }
  digitalWrite(ledpin,ledstate);
}*/