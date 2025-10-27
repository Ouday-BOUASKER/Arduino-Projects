// This project is designed to implement a PWM signal simulating the LED that goes brighter then dimmer using the ArduinoUNO board and a LED.

const int MAX_DC = 255;
const int LedPin = 11;

void setup()
{
  pinMode(LedPin, OUTPUT);
  digitalWrite (LedPin, LOW); // This is a best practice to avoid getting in weird behavior, we initialize the default state of the LED.
}

void loop()
{
  //float dc = 0.2; // Supposedly that it writes a 20% duty cycle to LedPin 
  float dc = 0; 
  for(dc = 0; dc < 1; dc+=0.01)
  {
    analogWrite(LedPin, MAX_DC*dc);
    delay(10);
  }
  for(dc = 1; dc > 0; dc-=0.01)
  {
    analogWrite(LedPin, MAX_DC*dc);
    delay(10);
  }
}
