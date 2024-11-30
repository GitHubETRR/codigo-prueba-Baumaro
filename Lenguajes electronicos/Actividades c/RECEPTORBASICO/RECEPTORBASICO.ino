#include <SPI.h>
#include <RH_NRF905.h>
//#include <PWMServo.h>

#define P_INICIAL 89
#define MARGEN 5
#define ADELANTE 4
#define ATRAS 2
#define PWM_M 3

//PWMServo servoMotor;
RH_NRF905 nrf905;

void InterpretarJoystick(int, int);
void Comunicar();

void setup() {
  Serial.begin(9600);
  //servoMotor.attach(PWM_SERVO);
  //servoMotor.write(90);
  pinMode(ADELANTE, OUTPUT);
  pinMode(ATRAS, OUTPUT);
  //pinMode(ENA_0, OUTPUT);
  //pinMode(ENA_1, OUTPUT);
  pinMode(PWM_M, OUTPUT);  
  if (!nrf905.init())Serial.println("init failed");
}

void loop() {
  Comunicar();
}

void Comunicar(){
  if (nrf905.available()) {
    uint8_t buf[RH_NRF905_MAX_MESSAGE_LEN];
    uint8_t len = sizeof(buf);
    if (nrf905.recv(buf, &len)) {
      int ang_y, ang_x;
      if (len >= sizeof(ang_y) + sizeof(ang_x)) {
        memcpy(&ang_y, buf, sizeof(ang_y));
        memcpy(&ang_x, buf + sizeof(ang_y), sizeof(ang_x));
        Serial.print("Received y: ");
        Serial.println(ang_y);
        Serial.print("Received x: ");
        Serial.println(ang_x);
        InterpretarJoystick(ang_x, ang_y);
      } else {
        Serial.println("Invalid message length");
      }
    } else {
      Serial.println("recv failed");
    }
  }
  delay(10);
}


void InterpretarJoystick(int ang_x, int ang_y) {
  if (ang_y != P_INICIAL || !(ang_x > (90 - MARGEN) && ang_x < (90 + MARGEN))) {
    if (ang_x > (90 - MARGEN) && ang_x < (90 + MARGEN)) {
      if (ang_y > 90) {
        retroceder(ang_x, ang_y);
      } else {
        avanzar(ang_x, ang_y);
      }
    }

    if (!(ang_x > (90 - MARGEN) && ang_x < (90 + MARGEN))) {
      if (ang_y > P_INICIAL) {
        if (ang_x <= (90 - P_INICIAL)) {
          atras_izquierda(ang_x, ang_y);
        } else {
          atras_derecha(ang_x, ang_y);
        }
      }
      if (ang_y <= P_INICIAL) {
        if (ang_x <= (90 - P_INICIAL)) {
          girar_izquierda(ang_x, ang_y);
        } else {
          girar_derecha(ang_x, ang_y);
        }
      }
    }
  } else {
    parado(ang_x, ang_y);
  }
}

void parado(int ang_x, int ang_y) {
  Serial.println("parado");
  digitalWrite(ADELANTE, LOW);
  digitalWrite(ATRAS, LOW);
  //analogWrite(ENA_1, LOW);
  //analogWrite(ENA_0, LOW);
  analogWrite(PWM_M, 0);
}

void avanzar(int ang_x, int ang_y) {
  Serial.println("avanzar");
  //servoMotor.write(90);
  digitalWrite(ADELANTE, HIGH);
  digitalWrite(ATRAS, LOW);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH); 
  analogWrite(PWM_M, 255);
}

void retroceder(int ang_x, int ang_y) {
  Serial.println("retroceder");
  //servoMotor.write(90);
  digitalWrite(ADELANTE, LOW);
  digitalWrite(ATRAS, HIGH);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH); 
  analogWrite(PWM_M, 255);
}

void girar_derecha(int ang_x, int ang_y) {
  Serial.println("girar derecha");
  //servoMotor.write(ang_x);
  digitalWrite(ADELANTE, HIGH);
  digitalWrite(ATRAS, LOW);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH);
  analogWrite(PWM_M, 255);
}

void girar_izquierda(int ang_x, int ang_y) {
  Serial.println("girar izquierda");
  //servoMotor.write(ang_x);
  digitalWrite(ADELANTE, HIGH);
  digitalWrite(ATRAS, LOW);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH);
  analogWrite(PWM_M, 255);
}

void atras_izquierda(int ang_x, int ang_y) {
  Serial.println("atras izquierda");
  //servoMotor.write(ang_x);
  digitalWrite(ADELANTE, LOW);
  digitalWrite(ATRAS, HIGH);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH); 
  analogWrite(PWM_M, 255);
}

void atras_derecha(int ang_x, int ang_y) {
  Serial.println("atras derecha");
  //servoMotor.write(ang_x);
  digitalWrite(ADELANTE, LOW);
  digitalWrite(ATRAS, HIGH);
  //analogWrite(ENA_1, HIGH);
  //analogWrite(ENA_0, HIGH);
  analogWrite(PWM_M, 255);
}
