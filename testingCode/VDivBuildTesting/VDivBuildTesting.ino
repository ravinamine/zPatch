int red = 20;
int yellow = 21;
int green = 22;
int blue = 23;

int Index;
int Mid;
int Ring;
int Pink;

int iniIndex;
int iniMid;
int iniRing;
int iniPink;

int varIndex;
int varMid;
int varRing;
int varPink;

int prevIndex;
int prevMid;
int prevRing;
int prevPink;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  iniIndex = analogRead(A0);
  iniMid = analogRead(A1);
  iniRing = analogRead(A2);
  iniPink = analogRead(A3);
  
  varIndex = analogRead(A0);
  varMid = analogRead(A1);
  varRing = analogRead(A2);
  varPink = analogRead(A3);
}


void loop() {
  prevIndex = analogRead(A0);
  prevMid = analogRead(A1);
  prevRing = analogRead(A2);
  prevPink = analogRead(A3);
  
  Index = (prevIndex - varIndex)/2;
  Mid = (prevMid - varMid)/2;
  Ring = (prevRing - varRing)/2;
  Pink = (prevPink - varPink)/2;
  
  if (Index <= (iniIndex)){
    analogWrite(red, 255);
  }
  else{
    analogWrite(red, 0);
  }
  if (Mid <= (iniMid)){
    analogWrite(yellow,255);
  }
  else{
    analogWrite(yellow,0 );
  }
  if (Ring <= (iniRing)){
    analogWrite(green, 255);
  }
  else{
    analogWrite(green, 0);
  }
  if (Pink <= (iniPink)){
    analogWrite(blue, 255);
  }
  else{
    analogWrite(blue, 0);
  }
  varIndex = prevIndex;
  varMid = prevMid;
  varRing = prevRing;
  varPink = prevPink;
  Serial.println(Ring);
 }
