void setup()
{
 pinMode(11,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  int button;
  button=digitalRead(11);
  Serial.println(button);
}
