const byte A_PIN = A0;
int value;
const byte LED = 2;

const int LIGHT_CHANGE = 900;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(A_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A_PIN);
  Serial.println(value);
  delay(500);
  if(value > LIGHT_CHANGE)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}