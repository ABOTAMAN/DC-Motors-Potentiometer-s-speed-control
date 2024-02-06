
//MOTOR 1
int sw1=2;
int R=  9;
int pm1=A1;
int motor7=7;
int motor8=8;

//MOTOR 2
int sw2=3;
int L= 10;
int pm2=A0;
int motor11=11; 
int motor12=12;


void setup(){
  Serial.begin(9600);
  
  //MOTOR 1
  pinMode(sw1,INPUT);
  pinMode(R,OUTPUT);
  pinMode(pm1,INPUT);
  pinMode(motor7,OUTPUT);
  pinMode(motor8,OUTPUT);
  
   //MOTOR 2
  pinMode(sw2,INPUT);
  pinMode(L,OUTPUT);
  pinMode(pm2,INPUT);
  pinMode(motor11,OUTPUT);
  pinMode(motor12,OUTPUT);
  
}

void loop(){
  
 char reading=Serial.read();  
 int  speed1=map(analogRead(pm1),0,1023,0,255);
     analogWrite(R,speed1); 
  
 int speed2=map(analogRead(pm2),0,1023,0,255);
    analogWrite(L,speed2);
  
  switch(reading){
    
    case 'R':
             digitalWrite(motor7,1);
             digitalWrite(motor8,0);
             
        break;
  
    case 'L': 
             digitalWrite(motor11,1);
             digitalWrite(motor12,0);
             
        break;
    
    case 'S': 
             digitalWrite(motor11,0);
             digitalWrite(motor12,0);
             digitalWrite(motor7,0);
             digitalWrite(motor8,0);
        break;
      }
  
int ahmed1=digitalRead(sw1);
int ahmed2=digitalRead(sw2); 
  
  if(ahmed1==1){
     digitalWrite(motor7,1);
     digitalWrite(motor8,0);
  }
 // else if(ahmed1==0){
   //  digitalWrite(motor7,0);
   //  digitalWrite(motor8,0);
 // }
  
  if(ahmed2==1){
     digitalWrite(motor11,1);
     digitalWrite(motor12,0);
  }
  //else{
    // digitalWrite(motor11,0);
    // digitalWrite(motor12,0);

 // }

}
  
  
  
  
  
  
  
  
