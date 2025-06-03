char valorSWITCH1VELO;
char valorSWITCH2AREA;
char valorSWITCH3SUMO;
bool valorSWITCH1VELO;
bool valorSWITCH2AREA;
bool valorSWITCH3SUMO;
//---//
#DEFINE BLANCO 300
#DEFINE NEGRO 900
#define OUT1
#define OUT2
#define OUT3
#define OUT4
#define OUT5
#define OUT6
#define OUT7
#define OUT8
int VALOR0;
int VALOR1;
int VALOR2;
int VALOR3;
int VALOR4;
int VALOR5;
int VALOR6; 
int VALOR7;
char velocidadA;
char velocidadB;
bool motorDA;
bool motorDB;
bool motorIA;
bool motorIB;
char sensorP1;
char sensorP2;
bool valorsensorP1;
bool valorsensorP2;
char ultra1;
char ultra2;
char ultra3;
char ultra4;
bool valorultra1;
bool valorultra2;
bool valorultra3;
bool valorultra4;
//---//
void AVANZAR() { 
 digitalWrite(motorDA, HIGH);
 digitalWrite(motorDB, LOW);
 digitalWrite(motorIA, HIGH);
 digitalWrite(motorIB, LOW);
 velocidadA=255;
 velocidadB=255;
}
void DERECHA() { 
 digitalWrite(motorDA, HIGH);
 digitalWrite(motorDB, LOW);
 digitalWrite(motorIA, LOW);
 digitalWrite(motorIB, HIGH);
 velocidadA=255;
 velocidadB=255;
}
void IZQUIERDA() { 
 digitalWrite(motorDA, LOW);
 digitalWrite(motorDB, HIGH);
 digitalWrite(motorIA, HIGH);
 digitalWrite(motorIB, LOW);
 velocidadA=255;
 velocidadB=255;
}
void ATRAS() { 
 digitalWrite(motorDA, LOW);
 digitalWrite(motorDB, HIGH);
 digitalWrite(motorIA, LOW);
 digitalWrite(motorIB, HIGH);
 velocidadA=255;
 velocidadB=255;
}
void BUSCAR() { 
 digitalWrite(motorDA, HIGH);
 digitalWrite(motorDB, LOW);
 digitalWrite(motorIA, LOW);
 digitalWrite(motorIB, LOW);
 velocidadA=255;
 velocidadB=255;
}

//---//
//VELOCISTA//
//---//

void LECTURA() {
 valorSWITCH1VELO = digitalRead(SWITCH1VELO);
 valorSWITCH2AREA = digitalRead(SWITCH2AREA);
 valorSWITCH3SUMO = digitalRead(SWITCH3SUMO);
}

void LECTURAPISO(){
  VALOR0 = analogRead(OUT1);
  VALOR1 = analogRead(OUT2);
  VALOR2 = analogRead(OUT3);
  VALOR3 = analogRead(OUT4);
  VALOR4 = analogRead(OUT5);
  VALOR5 = analogRead(OUT6);
  VALOR6 = analogRead(OUT7);
  VALOR7 = analogRead(OUT8);
}
void MOVIMIENTO_VELOCISTA(){
  if(VALOR0 < BLANCO){
  DERECHA();
  else if(VALOR1 < BLANCO){
  DERECHA();
  else if(VALOR2 < BLANCO){
  DERECHA();
  else if(VALOR3 && VALOR4 < BLANCO){
  AVANZAR();
  else if(VALOR5 < BLANCO){
  IZQUIERDA();
  else if(VALOR6 < BLANCO){
  IZQUIERDA();
  else if(VALOR7 < BLANCO){
  IZQUIERDA();
  }
}

//---//
//DESPEJA AREA//
//---//

void LECTURAULTRA(){
  if(ultra<40){
      valorultra1 = HIGH;
    }
    else{
      valorultra1 = LOW;
    }
     if(ultra<40){
      valorultra2 = HIGH;
    }
    else{
      valorultra2 = LOW;
    }
     if(ultra<40){
      valorultra3 = HIGH;
    }
    else{
      valorultra3 = LOW;
    }
     if(ultra<40){
      valorultra4 = HIGH;
    }
    else{
      valorultra4 = LOW;
    }
}

void DESPEJAR(){
 LECTURAULTRA();
 if(valorultra1 == HIGH){
  AVANZAR();
 }
 else if(valorultra1 == LOW){
  BUSCAR();
 }
 else if(valorultra1 == LOW )
}

void setup() {
 pinMode(motorDA,OUTPUT);
 pinMode(motorDB,OUTPUT);
 pinMode(motorIA,OUTPUT);
 pinMode(motorIB,OUTPUT); 
 pinMode(velocidadA,OUTPUT); 
 pinMode(velocidadB,OUTPUT); 
 //---//
 pinMode(OUT1,OUTPUT);
 pinMode(OUT2,OUTPUT);
 pinMode(OUT3,OUTPUT);
 pinMode(OUT4,OUTPUT);
 pinMode(OUT5,OUTPUT);
 pinMode(OUT6,OUTPUT);
 pinMode(OUT7,OUTPUT);
 pinMode(OUT8,OUTPUT);
 //---//
 pinMode(ultra1,INPUT);
 pinMode(ultra2,INPUT);
 pinMode(ultra3,INPUT);
 pinMode(ultra4,INPUT);
}

void loop() {
  LECTURA();
  if(SWITCH1VELO == HIGH){
    LECTURAPISO();
    VELOCISTA();
  }
  else if(SWITCH2AREA == HIGH){
    DESPEJAR();
  }
  if(que pasa si mas de un sensor está en HIGH){
   a
  }
  else if(SWITCH3SUMO == HIGH){
    programar el bluethooth
  }
}
