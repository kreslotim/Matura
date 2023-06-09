float tdel=30; //30us period of HF
// the setup function runs once when you press reset or power the board
void setup() {
// initialize digital pin LED_BUILTIN as an output.
pinMode(LED_BUILTIN, OUTPUT);
pinMode(4, OUTPUT);
digitalWrite(4, LOW);
}
// the loop function runs over and over again forever
void loop()
{
//PlayGammas();
PlaySecrets();
delay(0);
}
void PlaySong()
{
PlayNote("A4",10);
PlayNote("B4",10);
PlayNote("C5",10);
}
void PlayGammas()
{
PlayNote("C3",4);
PlayNote("D3",4);
PlayNote("E3",4);
PlayNote("F3",4);
PlayNote("G3",4);
PlayNote("A3",4);
PlayNote("B3",4);
PlayNote("C4",4);
PlayNote("D4",4);
PlayNote("E4",4);
PlayNote("F4",4);
PlayNote("G4",4);
PlayNote("A4",4);
PlayNote("B4",4);
PlayNote("C5",4);
PlayNote("D5",4);
PlayNote("E5",4);
PlayNote("F5",4);
PlayNote("G5",4);PlayNote("A5",4);
PlayNote("B5",4);
PlayNote("C6",16);
return;
}
void PlayNote( char *note, int tackts)
{
unsigned long Duration_ms;
Duration_ms=tackts*125;
int div=1;
int freq;
switch (note[1]) {
case '7': div=1; break;
case '6': div=2; break;
case '5': div=4; break;
case '4': div=8; break;
case '3': div=16; break;
div=1;
}
switch (note[0]) {
case 'C': freq=2093/div; break;
case 'c': freq=2217/div; break;
case 'D': freq=2349/div; break;
case 'd': freq=2489/div; break;
case 'E': freq=2637/div; break;
case 'F': freq=2793/div; break;
case 'f': freq=2960/div; break;
case 'G': freq=3136/div; break;
case 'g': freq=3322/div; break;
case 'A': freq=3520/div; break;
case 'a': freq=3729/div; break;
case 'B': freq=3951/div; break;
}
PlayTone(freq, Duration_ms);
delay(25);
return;
}
unsigned long dt;
unsigned long hp;
unsigned long tp0;
unsigned long tt0;
void PlayTone( int Frequency_Hz, unsigned long Duration_ms)
{
hp=500000/Frequency_Hz; //half-period
dt=Duration_ms*1000;
//dt=300000;
tt0=micros();
while(micros()-tt0<dt)
{tp0=micros();
while(micros()-tp0<hp)
{
digitalWrite(4, HIGH);
delayMicroseconds(tdel);
digitalWrite(4, LOW);
delayMicroseconds(tdel);
}
while(micros()-tp0<2*hp)
{ //just wait here
}
}
return;
}