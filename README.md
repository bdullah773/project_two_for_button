# project_two_for_button

It is a simple project that was built in the Ardino environment, where this project runs an LED via a control button so that when pressing and running LED . The first time the LED is turned on and the second time is extinguished LED

---

Image for the project
<div>
  <img src="https://github.com/bdullah773/project_two_for_button/blob/main/%D8%AA%D9%83%D9%84%D9%8A%D9%81%201.3.png">
</div>

---

ex Git :
~~~
void loop() {  
  buttonState = digitalRead(buttonPin);  // Read the button state (HIGH or LOW);
~~~
The digitalRead function reads the state of the button and stores it in the buttonState variable.

~~~
  if (buttonState == HIGH && lastButtonState == LOW) {  
    if (ledState == LOW) {  
      ledState = HIGH;  // If the LED is off, turn it on
    } else {  
      ledState = LOW;  // If the LED is on, turn it off
    }  
  }
  ~~~
This part checks if the button has been pressed:

buttonState == HIGH: Indicates the button is currently pressed.

lastButtonState == LOW: Indicates the button was not pressed in the previous iteration.

If the conditions are met, the LED state is toggled:

If the LED is off (ledState == LOW), it is turned on (ledState = HIGH).

If the LED is on (ledState == HIGH), it is turned off (ledState = LOW

~~~
  lastButtonState = buttonState;  // Update the previous button state
~~~
The digitalWrite function applies the ledState to the ledPin (turning the LED on or off).

Summary of How the Code Works:
When the button is pressed:

The program detects a change in the button state from LOW to HIGH.

The LED state is toggled (from on to off or vice versa).

The previous button state is updated to detect the next press.

The LED state is applied to the specified pin.

The delay (delay(50)) prevents bounce and ensures proper button response.

------
This project was established by Eng. Abdullah Shamsan 
---

