const byte A_PIN = A0;
const byte LED = 3;  //PWMに対応しているのは3, 5, 6, 9, 10, 11
int value;

const int LIGHT_MIN = 850;  //明るさの下限、環境によって調整したほうがいい
const int LIGHT_MAX = 900;  //明るさの上限、環境によって調整したほうがいい

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(A_PIN, INPUT);
  Serial.begin(9600);  //接続開始
}

void loop()
{
  value = analogRead(A_PIN);
  value = (value < LIGHT_MIN) ? LIGHT_MIN : value;  //下限
  value = (value > LIGHT_MAX) ? LIGHT_MAX : value;  //上限

  value = ((float)(value - LIGHT_MIN) / (LIGHT_MAX - LIGHT_MIN)) * 255;
  Serial.println(value);

  analogWrite(LED, value);
}