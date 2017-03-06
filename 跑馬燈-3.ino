const byte startPin = 1;
const byte endPin = 8;
const byte LED = 13;
const byte SW = 13;

void setup() {
   pinMode(SW,INPUT);
  // put your setup code here, to run once:
  //boolean SW; 
  for (byte i = startPin; i<= endPin; i++) 
  {
    pinMode(i, OUTPUT);
    pinMode(LED, OUTPUT);
   
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  byte i,j;
  byte lightPin = startPin;
  boolean val = digitalRead(13);
   
  if(val==0)
  {
  byte i;
  byte lightPin = startPin;
  for (i=startPin; i<= endPin; i++)
  {
    digitalWrite(i,LOW);
    
  	if (lightPin < endPin) 
  	{
    	lightPin ++;
  	} 
  	else 
  	{
    	lightPin = endPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  } 
  lightPin = endPin;
  for (i=endPin; i>= startPin; i--)
  {
    digitalWrite(i,LOW);
  	if (lightPin > startPin) 
  	{
    	lightPin --;
  	} 
  	else 
  	{
    	lightPin = startPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  } 
  }
  else
  {
  for(j=0;j<=1;j++)
  {
  	for(i=lightPin;i<=endPin;i++)
    	digitalWrite(i,HIGH);
  	delay (300);
  	for(i=lightPin;i<=endPin;i++)
    	digitalWrite(i,LOW);
  	delay (300); 
  }
 for (i=startPin; i<= endPin; i++)
  {
    digitalWrite(i,LOW);
    
  	if (lightPin < endPin) 
  	{
    	lightPin ++;
  	} 
  	else 
  	{
    	lightPin = endPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  }  
 	lightPin = startPin;
 for(j=0;j<=1;j++)
 {
  for(i=lightPin;i<=endPin;i++)
    digitalWrite(i,HIGH);
  delay (300);
  for(i=lightPin;i<=endPin;i++)
    digitalWrite(i,LOW);
  delay (300); 
 } 
lightPin = endPin;
  for (i=endPin; i>= startPin; i--)
  {
    digitalWrite(i,LOW);
  	if (lightPin > startPin) 
  	{
    	lightPin --;
  	} 
  	else 
  	{
    	lightPin = startPin;
  	}
  	digitalWrite(lightPin, HIGH);
  	delay (100);
  }   
 }
}
