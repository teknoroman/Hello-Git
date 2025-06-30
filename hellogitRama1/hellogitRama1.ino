int Led = 3;

void setup()
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite (Led, HIGH);
  Serial.println("piztuta");
  delay (3000);
  digitalWrite (Led, LOW);
  Serial.println("itzalita");
  delay (3000);
}
