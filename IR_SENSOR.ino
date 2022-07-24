// IR Sensor Code

const int Irsensor=2;
const int ledpin=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(Irsensor,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int irstate=digitalRead(Irsensor);
  if(irstate==HIGH)
  {
    digitalWrite(ledpin,LOW);
  }
  else
  {
    digitalWrite(ledpin,HIGH);

  }
}
