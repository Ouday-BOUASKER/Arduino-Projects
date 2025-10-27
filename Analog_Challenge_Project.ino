//This is a project designed to implement an analog signal using an ArduinoUno Board, 3 LEDs and a potentiometer to control 3 different rythms of blinking depending on the value of the potentiometer.

const int MAX_ADC = 1023;
const int MAX_RANGE = 500;

const int LedPin = 11;
const int LedPin1 = 10;
const int LedPin2 = 9;
const int AnalogIn = A0;

void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
}

void loop()
{
  int adcVal = analogRead(AnalogIn);
  int range = ((float)adcVal/1023)*MAX_RANGE;
  int waitms = MAX_RANGE - range;
  
  if(range == 0)
  {
    //This is the rythm of LedPin
    digitalWrite (LedPin, HIGH);
    delay(waitms/8);
    digitalWrite (LedPin, LOW);
    delay(waitms/8);
    //This is the rythm of LedPin1
    digitalWrite (LedPin1, HIGH);
    delay(waitms/8);
    digitalWrite (LedPin1, LOW);
    delay(waitms/8);
    //This is the rythm of LedPin2
    digitalWrite (LedPin2, HIGH);
    delay(waitms/8);
    digitalWrite (LedPin2, LOW);
    delay(waitms/8);
  }
  else if (range <= MAX_RANGE/2)
  {
    //This is the rythm of LedPin
    digitalWrite (LedPin, HIGH);
    delay(waitms/4);
    digitalWrite (LedPin, LOW);
    delay(waitms/4);
    //This is the rythm of LedPin1
    digitalWrite (LedPin1, HIGH);
    delay(waitms/4);
    digitalWrite (LedPin1, LOW);
    delay(waitms/4);
    //This is the rythm of LedPin2
    digitalWrite (LedPin2, HIGH);
    delay(waitms/4);
    digitalWrite (LedPin2, LOW);
    delay(waitms/4);
  }
  else if ( MAX_RANGE < range <= MAX_RANGE)
  {
    //This is the rythm of LedPin
    digitalWrite (LedPin, HIGH);
    delay(waitms);
    //This is the rythm of LedPin1
    digitalWrite (LedPin1, HIGH);
    delay(waitms);
    //This is the rythm of LedPin2
    digitalWrite (LedPin2, HIGH);
    delay(waitms);
  }
}
