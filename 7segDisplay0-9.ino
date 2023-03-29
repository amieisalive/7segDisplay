//     _
//     a
//  f| _ |b
//     g
//  e| _ |c
//     d      
//
byte connection[]  = {2,3,4,5,6,7,8};

byte numL[10][7]={
{1,0,0,1,1,1,1},//1    0 je on 1 je off????
{0,0,1,0,0,1,0},//2
{0,0,0,0,1,1,0},//3
{1,0,0,1,1,0,0},//4
{0,1,0,0,1,0,0},//5
{0,1,0,0,0,0,0},//6
{0,0,0,1,1,1,1},//7
{0,0,0,0,0,0,0},//8
{0,0,0,0,1,0,0},//9
{0,0,0,0,0,0,1},//0
};
  
void setup() {
for(int i=2; i<9; i=i+1){
  pinMode(i, OUTPUT);
}
}
void num(int j){
  for (int i=0; i<7; i=i+1){
    digitalWrite(connection[i], numL[j][i]);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
for(int j=0; j<10; j=j+1){
  num(j);
  delay(750);
}
for(int j=9; j>0; j=j-1){
  num(j);
  delay(750);
}
}
