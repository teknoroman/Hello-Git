int Led = 6;

void setup()
{
  pinMode(Led, OUTPUT);
}
void loop()
{
  digitalWrite (Led, HIGH);
  delay (6000);
  digitalWrite (Led, LOW);
  delay (6000);
}
