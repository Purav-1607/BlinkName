void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
}

void loop() 
{
  //First Name : PURAV
  //P
  dot();
  dash();
  dash();
  dot();

  //U
  dot();
  dot();
  dash();

  //R
  dot();
  dash();
  dot();

  //A
  dot();
  dash();
  
  //V
  dot();
  dot();
  dot();
  dash();
  
}
