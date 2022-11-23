int ledVerde = 2;
int ledAmarelo = 4;
int ledVermelho = 5;
int Altitude;
int Temperatura;
int Tensao;
int GpsLatitude;
int GpsLongitude;
int GpsAltura;
int GiroscopioR;
int GiroscopioP;
int GiroscopioY;
int AcelerometroR;
int AcelerometroP;
int AcelerometroY;
int MagnetometroR;
int MagnetometroP;
int MagnetometroY;
int cont;
int transmitter[15];

void setup() {
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  Altitude = random(300);
  Temperatura = random(900);
  Tensao = random(1, 4);
  GpsLatitude = random(300);
  GpsLongitude = random(300);
  GpsAltura = random(900);
  GiroscopioR = random(300);
  GiroscopioP = random(300);
  GiroscopioY = random(300);
  AcelerometroR = random(300);
  AcelerometroP = random(300);
  AcelerometroY = random(300);
  MagnetometroP = random(300);
  MagnetometroR = random(300);
  MagnetometroY = random(300);
  cont = cont + 1;
  transmitter[0] = cont;
  transmitter[1] = Altitude;
  transmitter[2] = Temperatura;
  transmitter[3] = Tensao;
  transmitter[4] = GpsLatitude;
  transmitter[5] = GpsLongitude;
  transmitter[6] = GpsAltura;
  transmitter[7] = GiroscopioR;
  transmitter[8] = GiroscopioP;
  transmitter[9] = GiroscopioY;
  transmitter[10] = AcelerometroR;
  transmitter[11] = AcelerometroP;
  transmitter[12] = AcelerometroY;
  transmitter[13] = MagnetometroP;
  transmitter[14] = MagnetometroR;
  transmitter[15] = MagnetometroY;
  digitalWrite(ledVermelho, HIGH);
  for (int i = 0; i < 15; i++) {
    Serial.println(transmitter[i]);
    if (i == 0) {
      Serial.print("Contador ");
    }
    delay(20);
  }
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(600);
  digitalWrite(ledVerde, LOW);
}
