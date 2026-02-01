int i=0;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop() {
 
 if(i>=10){
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
 }
 else if(i>=5 && i<10){
  i= i+1;
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(1000);

 }
 else{
  i=i+1;
  digitalWrite(4,HIGH);
  delay(1000);
 }

}
