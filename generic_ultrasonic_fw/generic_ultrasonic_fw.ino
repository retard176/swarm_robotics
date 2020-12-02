
int Trig = A1;
int Echo = A2;
int pingT;

void setup() {
  // put your setup code here, to run once:
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pingT = pingTime();
  Serial.println(pingT);
  delay(500);

}

int pingTime(){
  int pingTravelTime;
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  pingTravelTime = pulseIn(Echo, HIGH);        
  return pingTravelTime; 
}
