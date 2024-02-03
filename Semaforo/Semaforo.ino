
const int LED_VERMELHO = 13;
const int LED_AMARELO = 12;
const int LED_VERDE = 11;

class Semaforo{
public:
  void SemaforoGeneralTime(int generalTime){
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    delay(generalTime);

    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    delay(generalTime);

    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
    delay(generalTime);
  }

  void SemaforoTimeApart(int timeLedGreen,int timeLedYelow, int timeLedRed){
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    delay(timeLedGreen);

    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    delay(timeLedYelow);

    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
    delay(timeLedRed);
  }

  void SemaforoOff(){
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
  }
};

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

Semaforo start;

void loop() {
  start.SemaforoGeneralTime(2000);
  start.SemaforoOff();
  delay(3000);
}


