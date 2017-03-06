const byte startPin = 1;
const byte endPin = 8;

void setup() {
  // put your setup code here, to run once:
  for (byte i = startPin; i<= endPin; i++) 
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  byte i,j;
  byte lightPin = startPin;
  
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
