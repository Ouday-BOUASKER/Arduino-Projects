//This is a project designed to implement an analog signal using an ArduinoUno Board, LED and a potentiometer to control its rythm of blinking.

const int MAX_ADC = 1023;
const int MAX_RANGE = 500;

const int LedPin = 13;
const int AnalogIn = A0;

void setup()
{
  pinMode(LedPin, OUTPUT);
}

void loop()
{
  int adcVal = analogRead(AnalogIn);
  int range = ((float)adcVal/MAX_ADC)*MAX_RANGE;
  int waitms = MAX_RANGE - range; 
  digitalWrite (LedPin, HIGH);
  delay(waitms);
  digitalWrite (LedPin, LOW);
  delay(waitms);
}
