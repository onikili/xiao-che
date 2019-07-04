void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income;
void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
  }
  switch(income){
    case:'f':
        forward();
    break;
    case:'b:
        backward();
    break;
    case:'l:
        left();
    break;
    case:'r:
        right();
    break;
    case:'s:
        stop();
    break;
  default;
  break;
  }
}
void forward()
{
  digitalWrite(5,High);
  digitalWrite(6,Low);
  digitalWrite(9,High);
  digitalWrite(10,High);
}
void backward()
{
  digitalWrite(5,Low);
  digitalWrite(6,High);
  digitalWrite(9,Low);
  digitalWrite(10,High);
}
void left();
{
  digitalWrite(5,High);
  digitalWrite(6,Low);
  digitalWrite(10,High);
  digitalWrite(9,Low);
}
void right();
{
  digitalWrite(6,High);
  digitalWrite(5,Low);
  digitalWrite(9,High);
  digitalWrite(10,High);
}
void stop();
{
  digitalWrite(5,Low);
  digitalWrite(6,Low);
  digitalWrite(9,Low);
  digitalWrite(10,Low);
}
