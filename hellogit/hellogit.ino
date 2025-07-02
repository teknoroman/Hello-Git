int Led = 10;
int Denbora =1000;

void setup()
{
  pinMode(Led, OUTPUT);
}
void loop()
{
  digitalWrite (Led, HIGH);
  delay (Denbora);
  digitalWrite (Led, LOW);
  delay (Denbora);
}