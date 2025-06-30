int Led = 5;

void setup()
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite (Led, HIGH);
  Serial.println("piztu");
  delay (5000);
  digitalWrite (Led, LOW);
  Serial.println("itzali");
  delay (5000);
}
