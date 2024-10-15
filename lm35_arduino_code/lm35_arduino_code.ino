void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);

}
int thre=25;
void loop() {
  // put your main code here, to run repeatedly:
  int temp=analogRead(A0);
  float tempc=(temp*4.88);
  tempc=tempc/10;
  tempc=(tempc-30);
  if(tempc>thre){
    Serial.println("HIGH TEMP");
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    Serial.print("TEMP=");
    Serial.print(tempc);
    Serial.println("celcius");
  }
  else{
    Serial.print("TEMP=");
    Serial.print(tempc);
    Serial.println("celcius");  
    delay(2000);
  }
}