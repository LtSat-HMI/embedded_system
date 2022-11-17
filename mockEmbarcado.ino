int ledVerde = 2;
int ledAmarelo = 4;
int ledVermelho = 5;
int Altitude,
    Temperatura,
    Tensao,
    GpsLatitude,
    GpsLongitude,
    GpsAltura,
    GiroscopioR,
    GiroscopioP,
    GiroscopioY,
    AcelerometroR,
    AcelerometroP,
    AcelerometroY,
    MagnetometroR,
    MagnetometroP,
    MagnetometroY,
    cont;
int transmiter[16];

void setup() {
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  int transmiter[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
  transmiter[0] = cont;
  transmiter[1] = Altitude;
  transmiter[2] = Temperatura;
  transmiter[3] = Tensao;
  transmiter[4] = GpsLatitude;
  transmiter[5] = GpsLongitude;
  transmiter[6] = GpsAltura;
  transmiter[7] = GiroscopioR;
  transmiter[8] = GiroscopioP;
  transmiter[9] = GiroscopioY;
  transmiter[10] = AcelerometroR;
  transmiter[11] = AcelerometroP;
  transmiter[12] = AcelerometroY;
  transmiter[13] = MagnetometroP;
  transmiter[14] = MagnetometroR;
  transmiter[15] = MagnetometroY;
  cont = cont + 1;
  delay(1000);
  for (int i = 0; i < 15; i++) {
    Serial.print(cont);
    Serial.print(Altitude);
    Serial.print(Temperatura);
    Serial.print(Tensao);
    Serial.print(GpsLatitude);
    Serial.print(GpsLongitude);
    Serial.print(GpsAltura);
    // Serial.println(transmiter[i]);
  }
}
