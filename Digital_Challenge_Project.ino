//This is a project designed to implement MORSE Code through digital signal using an ArduinoUno Board, LED and a Switch.

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
    //We want to write the Word MAT via blinking Led
    /*The rules are as follows :  
     * dot equals 1 unit (500ms)
     * dash equals 3 units
     * space between own letter is 1 unit 
     * space between letters is 3 unit
     * space between words is 7 units
     * So, M = dash + dash, A = dot + dash, T = dash 
     */
    //This is the M letter
    digitalWrite(LedPin, HIGH);
    delay(3*waitms);
    digitalWrite(LedPin, LOW);
    delay(waitms);
    digitalWrite(LedPin, HIGH);
    delay(3*waitms);
    //This is the space between letters
    digitalWrite(LedPin, LOW);
    delay(3*waitms);
    //This is the A letter
    digitalWrite(LedPin, HIGH);
    delay(waitms);
    digitalWrite(LedPin, LOW);
    delay(waitms);
    digitalWrite(LedPin, HIGH);
    delay(3*waitms);
    //This is the space between letters
    digitalWrite(LedPin, LOW);
    delay(3*waitms);
    //This is the T letter
    digitalWrite(LedPin, HIGH);
    delay(3*waitms);
    //This is the space between letters
    digitalWrite(LedPin, LOW);
    delay(3*waitms);
  }
  else
  {
    digitalWrite(LedPin, LOW);
  }
}
