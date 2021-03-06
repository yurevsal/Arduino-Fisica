const int Sensor1 = A0;
const int Sensor2 = A1;
const int Sensor3 = A2;
const int Sensor4 = A3;
const int Sensor5 = A4;
//const int pinTone = 8;

unsigned long t0; // tempo inicial
unsigned long t1; // tempo final no sensor2
unsigned long t2; // tempo final no sensor3
unsigned long t3; // tempo final no sensor4
unsigned long t4; // tempo final no sensor5

void setup()
{
  Serial.begin(9600);
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT);
  pinMode(Sensor4, INPUT);
  pinMode(Sensor5, INPUT);
  //pinMode(pinTone, OUTPUT);
}

void loop()
{
  //Serial.print("Iniciando em 2s...");
  delay(2000); // aguarda dois segundos

  // Sensor1 -------------------------------------------
  Serial.println("Aguardando a resposta do Sensor1...");
  while (digitalRead(Sensor1) == LOW)
  {
    ; // Aguarda o primeiro sensor.
  }
  t0 = millis(); // captura o tempo corrente em t0
  Serial.print("t0 (ms) = "); Serial.println(t0);
  //tone(pinTone, 800,50);
  // Sensor2 -------------------------------------------
  Serial.println("Aguardando a resposta do Sensor2...");
  while (digitalRead(Sensor2) == HIGH);
  while (digitalRead(Sensor2) == LOW);
  
  t1 = millis(); // captura o tempo corrente em t1
  Serial.print("t1 (ms) = "); Serial.println(t1);
  //tone(pinTone, 800,50);
  //Sensor3---------------------------------------------
  Serial.println("Aguardando a resposta do Sensor3...");
  while (digitalRead(Sensor3) == HIGH);
  while (digitalRead(Sensor3) == LOW);

  t2 = millis(); // captura o tempo corrente em t2
  Serial.print("t2 (ms) = "); Serial.println(t2);
  //tone(pinTone, 800,50);
  //Sensor4---------------------------------------------
  Serial.println("Aguardando a resposta do Sensor4...");
  while (digitalRead(Sensor4) == HIGH);
  while (digitalRead(Sensor4) == LOW);

  t3 = millis(); // captura o tempo corrente em t3
  Serial.print("t3 (ms) = "); Serial.println(t3);
  //tone(pinTone, 800,50);
  //Sensor5---------------------------------------------
  Serial.println("Aguardando a resposta do Sensor5...");
  while (digitalRead(Sensor5) == HIGH);
  while (digitalRead(Sensor5) == LOW);

  t4 = millis(); // captura o tempo corrente em t4
  Serial.print("t4 (ms) = "); Serial.println(t4);
  //tone(pinTone, 800,50);




  // Calculo -------------------------------------------
  //Serial.print("Tempo decorrido 1_2 (ms): ");
  Serial.println(t1 - t0);
  //Serial.print("Tempo decorrido 1_3 (ms): ");
  Serial.println(t2 - t0);
  //Serial.print("Tempo decorrido 1_4 (ms): ");
  Serial.println(t3 - t0);
  //Serial.print("Tempo decorrido 1_5 (ms): ");
  Serial.println(t4 - t0);

  delay(1000);
  //notone(pinTone);
  Serial.println("Experimento finalizado....");
  Serial.println("Reset o Arduino...");
  while (1); // loop infinito. reset o arduino para um novo experimento.
}
