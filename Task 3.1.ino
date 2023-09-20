// C++ code
//
int red1  = 3 ;
int yellow1  = 4 ;
int red2 = 8 ;
int green2 = 10 ;
int switch1  = 0 ;
int switch2  = 0 ;

void setup()
{
  pinMode(red1 , OUTPUT); 
  pinMode(yellow1 , OUTPUT);
  pinMode(red2 , OUTPUT);
  pinMode(green2 , OUTPUT);
  pinMode(switch1 , INPUT);
  pinMode(switch2 , INPUT);
}
 void loop() 
 {
 switch1=digitalRead(7);
 switch2=digitalRead(12);
   
   if(switch1==1)
   {
     analogWrite( red1 , 128);
     digitalWrite(yellow1 , 1);
   }
   
    else if(switch1==0)
   {
     digitalWrite( red1 , 0);
     analogWrite(yellow1  , 0);
      
    }
      if(switch2==1)
   {
     digitalWrite( red2 , 1);
     analogWrite(green2  , 128);
   }   
   
     else if (switch2==0)
   {
     digitalWrite( red2 , 0);
     analogWrite(green2  , 0);
   }   
 }  

			
                        