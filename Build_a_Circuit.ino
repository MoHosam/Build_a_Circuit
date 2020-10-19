
// https://www.tinkercad.com/things/lzLGDri8JLX 
const byte btn = 2;
const byte btn2 = 3;    
const byte LED =  13;    
byte  buttonState = 0; 
byte  buttonState2 = 0;

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);
  pinMode(btn2, INPUT);
}

void loop() 
{

  buttonState = digitalRead(btn);
  buttonState2 = digitalRead(btn2);

  if (buttonState || buttonState2 == HIGH) 
  {
    digitalWrite(LED, HIGH);
  } 
  else 
  {
    digitalWrite(LED, LOW);
  }
}
