int ledpin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Voltage = analogRead(A0);
  Serial.println("Voltage"); 
  Serial.println(Voltage); 

  int brightness = map(Voltage,0,1023,0,255);
  analogWrite(ledpin,brightness);
  Serial.println("brightness"); 
  Serial.println(brightness); 

}
