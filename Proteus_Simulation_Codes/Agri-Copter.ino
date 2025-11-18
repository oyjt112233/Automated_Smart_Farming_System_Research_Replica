int Motor1 = 2;
int Motor2 = 3;
int Motor3 = 4;
int Motor4 = 5;
int Motor5 = 7;
int Motor6 = 8;
int Motor7 = 9;
int Motor8 = 10;
int PWMControl= 6;
int PWM_Input = A0;
int PWM_Value = 0;

void setup() {
  pinMode(Motor1, OUTPUT);
  pinMode(Motor2, OUTPUT);
  pinMode(Motor3, OUTPUT);
  pinMode(Motor4, OUTPUT);
  pinMode(Motor5, OUTPUT);
  pinMode(Motor6, OUTPUT);
  pinMode(Motor7, OUTPUT);
  pinMode(Motor8, OUTPUT);
  pinMode(PWMControl, OUTPUT);
  pinMode(PWM_Input, INPUT);
  Serial.begin(9600);
}

void loop() {
  PWM_Value = analogRead(PWM_Input);
  PWM_Value = map(PWM_Value, 0, 1023, 0, 255);
  analogWrite(PWMControl, PWM_Value);
  if(Serial.available()){
    char data = Serial.read();
    Serial.println(data);
    if(data == 'A'){MotorClockwise1();}
    if(data == 'B'){MotorAntiClockwise1();}
    if(data == 'C'){MotorStop1();}
    if(data == 'G'){MotorClockwise2();}
    if(data == 'H'){MotorAntiClockwise2();}
    if(data == 'I'){MotorStop2();}    
    if(data == 'M'){MotorClockwise3();}
    if(data == 'N'){MotorAntiClockwise3();}
    if(data == 'O'){MotorStop3();}    
    if(data == 'T'){MotorClockwise4();}
    if(data == 'U'){MotorAntiClockwise4();}
    if(data == 'V'){MotorStop4();}
  }
}

void MotorAntiClockwise1(){
  digitalWrite(Motor1, HIGH);
  digitalWrite(Motor2, LOW);
}

void MotorClockwise1(){
  digitalWrite(Motor1, LOW);
  digitalWrite(Motor2, HIGH);
}

void MotorStop1(){
  digitalWrite(Motor1, HIGH);
  digitalWrite(Motor2, HIGH);
}

void MotorAntiClockwise2(){
  digitalWrite(Motor3, HIGH);
  digitalWrite(Motor4, LOW);
}

void MotorClockwise2(){
  digitalWrite(Motor3, LOW);
  digitalWrite(Motor4, HIGH);
}

void MotorStop2(){
  digitalWrite(Motor3, HIGH);
  digitalWrite(Motor4, HIGH);
}

void MotorAntiClockwise3(){
  digitalWrite(Motor5, HIGH);
  digitalWrite(Motor6, LOW);
}

void MotorClockwise3(){
  digitalWrite(Motor5, LOW);
  digitalWrite(Motor6, HIGH);
}

void MotorStop3(){
  digitalWrite(Motor5, HIGH);
  digitalWrite(Motor6, HIGH);
}

void MotorAntiClockwise4(){
  digitalWrite(Motor7, HIGH);
  digitalWrite(Motor8, LOW);
}

void MotorClockwise4(){
  digitalWrite(Motor7, LOW);
  digitalWrite(Motor8, HIGH);
}

void MotorStop4(){
  digitalWrite(Motor7, HIGH);
  digitalWrite(Motor8, HIGH);
}