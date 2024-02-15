int IRpin = A0; 
int IRemitter = 2;
int LedRed = 3;
int LedYellow = 4;
int LedGreen = 5;
const int Buzzer = 11;
int ambientIR; 
int obstacleIR; 
int value[100];  
int distance;  

void setup(){
  Serial.begin(9600);    
  pinMode(IRemitter,OUTPUT);
  pinMode(LedRed,OUTPUT); 
  pinMode(LedYellow,OUTPUT); 
  pinMode(LedGreen,OUTPUT); 
  digitalWrite(IRemitter,LOW); 
  pinMode(Buzzer,OUTPUT);        
  digitalWrite(Buzzer,LOW);
}

void loop(){
  distance = -readIR(100) -34;  
  Serial.println(distance); 
  flags();
  buzzer();           
}

int readIR(int times){
  for(int x=0;x<times;x++){
    digitalWrite(IRemitter,LOW);         
    delay(1);                                            
    ambientIR = analogRead(IRpin);  
    digitalWrite(IRemitter,HIGH);          
    delay(1);                                           
    obstacleIR = analogRead(IRpin); 
    value[x] = ambientIR-obstacleIR;   
  }

  for(int x=0;x<times;x++){       
    distance+=value[x];
  }
  return(distance/times);           


void flags(){
  if( distance <= 10){
    digitalWrite(LedGreen,HIGH);
    digitalWrite(LedYellow,LOW);
    digitalWrite(LedRed,LOW);
  }
  else if(distance > 10 && distance < 20){
    digitalWrite(LedGreen,LOW);
    digitalWrite(LedYellow,HIGH);
    digitalWrite(LedRed,LOW);
    }
  else{
    digitalWrite(LedGreen,LOW);
    digitalWrite(LedYellow,LOW);
    digitalWrite(LedRed,HIGH);    
  }
}

void buzzer() {
  if (distance >= 20) {
    tone(Buzzer, 1000);
  } 
  else if (distance < 20 && distance > 10) {
    noTone(Buzzer);
    tone(Buzzer, 500);
    digitalWrite(Buzzer, HIGH);
    delay(100);
    digitalWrite(Buzzer, LOW);
    delay(100);
  } 
  else {
    noTone(Buzzer);
  }
}