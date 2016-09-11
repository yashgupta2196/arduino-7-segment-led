const int ONE = 13;
const int TWO = 12;
const int THREE = 11;
const int FOUR = 10;
const int FIVE = 9;
const int SIX = 8;
const int INDI = 7;
const int a = 6;
const int b = 5;
const int c = 4;
const int d = 3;
const int e = 2;
const int f = A5;
const int g = A4;
const int BUTTON = A3;

int val = 0;
long randNumber;

void setup()
{
  pinMode(ONE, OUTPUT);
  pinMode(TWO, OUTPUT);
  pinMode(THREE, OUTPUT);
  pinMode(FOUR, OUTPUT);
  pinMode(FIVE, OUTPUT);
  pinMode(SIX, OUTPUT);
  pinMode(INDI, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void displaySegment(int digit)
{
  if(digit == 1)
  {
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
  }
  if(digit == 2)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(g, LOW);
  }
  if(digit == 3)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(g, LOW);
  }
  if(digit == 4)
  {
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  if(digit == 5)
  {
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  if(digit == 6)
  {
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
}

void displayLED(int digit)
{
  if(digit == 1)
  {
    digitalWrite(TWO, HIGH);
  }
  if(digit == 2)
  {
    digitalWrite(TWO, HIGH);
    digitalWrite(FIVE, HIGH);
  }
  if(digit == 3)
  {
    digitalWrite(ONE, HIGH);
    digitalWrite(TWO, HIGH);
    digitalWrite(THREE, HIGH);
  }
  if(digit == 4)
  {
    digitalWrite(ONE, HIGH);
    digitalWrite(THREE, HIGH);
    digitalWrite(FOUR, HIGH);
    digitalWrite(SIX, HIGH);
  }
  if(digit == 5)
  {
    digitalWrite(ONE, HIGH);
    digitalWrite(THREE, HIGH);
    digitalWrite(FOUR, HIGH);
    digitalWrite(FIVE, HIGH);
    digitalWrite(SIX, HIGH);
  }
  if(digit == 6)
  {
    digitalWrite(ONE, HIGH);
    digitalWrite(TWO, HIGH);
    digitalWrite(THREE, HIGH);
    digitalWrite(FOUR, HIGH);
    digitalWrite(FIVE, HIGH);
    digitalWrite(SIX, HIGH);
  }
}

void turnOff()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(ONE, LOW);
  digitalWrite(TWO, LOW);
  digitalWrite(THREE, LOW);
  digitalWrite(FOUR, LOW);
  digitalWrite(FIVE, LOW);
  digitalWrite(SIX, LOW);
}

void loop()
{
  val = digitalRead(BUTTON);
  if((val == HIGH))
  {
    digitalWrite(INDI, HIGH);
    delay(100);
    randNumber = random(1,7);
    delay(100);
    Serial.println(randNumber);
    delay(100);
    digitalWrite(INDI, LOW);
    displaySegment(randNumber);
    displayLED(randNumber);
    delay(2000);
    turnOff();
  }
  
}
