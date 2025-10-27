//This is a project designed to implement a digital signal using an ArduinoUno Board, LED and a Switch.

const int LedPin = 13;
const int SwitchPin = 2;
int waitms = 500;
void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(SwitchPin, INPUT);
}

void loop()
{
  int val = digitalRead(SwitchPin);
  if(val == HIGH)
  {
    digitalWrite(LedPin, HIGH);
    delay(waitms);
  }
  else
  {
    digitalWrite(LedPin, LOW);
    delay(waitms);
  }
}
