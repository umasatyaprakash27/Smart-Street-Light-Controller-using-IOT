// C++ code
//
#define gas_reading A0
int inches=0;
const int trig=7;
int cm=0;
const int echo=5;
const int buzz=11;
unsigned long time;
int initial_time;
int dummyinches;
long readUltrasonicdistance(int trigger,int echo)
{
digitalWrite(trigger,LOW);
delayMicroseconds(2);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
return pulseIn(echo,HIGH);
}
void setup()
{
pinMode(trig, OUTPUT);
pinMode(echo,INPUT);
pinMode(buzz,OUTPUT);
Serial.begin(9600);
}
void loop()
{
int gr=analogRead(gas_reading);
cm=0.01723*readUltrasonicdistance(trig,echo);
inches=(cm/2.54);
Serial.println(inches);
Serial.println(gr);
if(gr>40)
{
tone(buzz,1000);
delay(500);
noTone(buzz);
delay(500);
}
initial_time=millis();
dummyinches=0.01723*readUltrasonicdistance(trig,echo);
while(dummyinches<=40)
{
if(millis()-initial_time>=3000) //for 3 seconds
{
tone(buzz,240);
delay(200);
tone(buzz,270);
delay(200);
tone(buzz,300);
delay(200);
tone(buzz,320);
delay(200);
tone(buzz,360);
delay(200);
tone(buzz,400);
delay(200);
tone(buzz,450);
delay(200);
noTone(buzz);
delay(200);
dummyinches=0.01723*readUltrasonicdistance(trig,echo);

}
}
}
