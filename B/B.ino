const int LED_PIN = 3;
const int NUM = 255;
const int DELAY = 1;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  for (int i = 0; i < NUM; i++)
  {
  	analogWrite(LED_PIN, i);
    delay(DELAY);
  }
  
  for (int i = NUM; i > 0; i--)
  {
  	analogWrite(LED_PIN, i);
    delay(DELAY);
  }
}