int output[] = {7, 8, 10, 11, 12, 6, 9}, arr[] = {63, 6, 91, 79, 102, 109, 125, 7, 127, 111, 119, 124, 57, 94, 121, 113};

void setup() {
  for(int i=2; i<=12; i++)
  {
    pinMode(i, (i<6)?INPUT: OUTPUT);  
  }                            
  
}

void loop() {
  int num = arr[digitalRead(2) + digitalRead(3)*2 + digitalRead(4)*4 + digitalRead(5)*8];
  for(int i=0; i<=6; i++)
  {
    digitalWrite(output[i],(num%2 == 1) ? HIGH : LOW), num/=2;
  }
}
