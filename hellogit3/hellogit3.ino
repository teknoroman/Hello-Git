int Led = 4;

void setup()
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite (Led, HIGH);
  Serial.println("piztu");
  delay (3000);
  digitalWrite (Led, LOW);
  Serial.println("itzali");
  delay (3000);
}
