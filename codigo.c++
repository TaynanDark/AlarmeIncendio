int rele = 12;
int sensorgas = A0;
int som = 11;
int sensorvalor = 0;
int gas = 0;

void setup()
{
  pinMode(rele, OUTPUT);
  pinMode(som, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  gas = analogRead(sensorgas);
    Serial.println(gas, DEC);
  
  if (gas>200){
  digitalWrite(rele, HIGH);
  tone (som, 440,10);
  
  }else{
    digitalWrite(rele, LOW);
  }
}