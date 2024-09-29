int water; //random variable 
int soilsensor=6 ;
int pump=3 ;
void setup() {
  pinMode(pump,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(soilsensor,INPUT); //input pin coming from soil sensor
}

void loop() { 
  water = digitalRead(soilsensor);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(pump,LOW); // low is to cut the relay
  }
  else
  {
  digitalWrite(pump,HIGH); //high to continue proving signal and water supply
  }
  delay(400); 
}
