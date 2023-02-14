//for further more information about the project and circuit diagram please visit the project on tinkercad from the next link https://www.tinkercad.com/things/jeRZAXHRCxm


#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6
#define aa 7
#define bb 8
#define cc 9
#define dd 10
#define ee 11
#define gg 12
#define trig 13
#define echo A0
double num=0,dis=0;
long duration=0;
byte cnt=0,num_after_point=0,num_befor_point=0;
byte s0[7]={a,b,c,d,e,f,g},s1[7]={aa,bb,cc,dd,ee,0,gg};
byte nums[11][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},  
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},
  {0,0,0,0,0,0,0}};
void ultrasonic(){
 digitalWrite(13,0); 
 delayMicroseconds(2);  
 digitalWrite(13,1); 
 delayMicroseconds(10);
 digitalWrite(13,0); 
 duration=pulseIn(echo,HIGH);
 dis=0.000343*duration/2;
}
void sev1(uint8_t n10){
  n10=(n10==0)?10:n10;
  for(int i=0;i<7;i++){
    if(i!=5)
digitalWrite(s1[i],*((*nums)+i+(7*n10)));    
}}
void sev0(uint8_t n0){
  for(int i=0;i<7;i++)
digitalWrite(s0[i],*((*nums)+i+(7*n0)));    
  }
void setup()
{
  for (int i=0;i<14;i++)
    pinMode(i, OUTPUT);
  
}
void loop()
{
  ultrasonic();
  num=dis;  
  num=(num>=10)?(num/10):num;
  num_befor_point=uint8_t(num);
  num_after_point=((num-uint8_t(num))*10);  
  sev1(num_befor_point);
  sev0(num_after_point);
  
}
