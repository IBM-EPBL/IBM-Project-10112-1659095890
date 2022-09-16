//Home Automation
//Presence of a person is detected,light bulb and fan is turned on based on day or night 

int pir=0;
int ldr = 0;
void setup()
{
  pinMode(13,OUTPUT);	//Bulb output
  pinMode(12,OUTPUT);	//Fan output
  pinMode(A0,INPUT);	//Photoresistor input
  pinMode(4,INPUT);		//PIR input
  Serial.begin(9600);
}

void loop()
{
  pir = digitalRead(4);			//PIR data (Active IR is prefered)
  ldr = analogRead(A0);			//Photoresistor data
  Serial.println(ldr);			//For checking Photoresistor status
  if(pir == HIGH){				//Person presence detected
    if(ldr<600){				//Night
    	digitalWrite(13,HIGH);	//Bulb is turned on
      	digitalWrite(12,HIGH);	//Fan is turned on
    }
    else{						//Day
      	digitalWrite(12,HIGH);	//Fan is turned on
    }
  }
  else{
    digitalWrite(13,LOW);		//Bulb is turned off
    digitalWrite(12,LOW);
  }
}