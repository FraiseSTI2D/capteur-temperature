int valeurCapteur;
int valeurTemperature;
void setup()
{
    pinMode(A1, INPUT);
    Serial.begin(9600);
}

void loop()
{
    valeurCapteur =  analogRead(A1);
    valeurTemperature = map(valeurCapteur, 20, 358, -40, 125);
    Serial.print(valeurTemperature);
    Serial.print((char)176);
    Serial.println("C");
    delay(100);
}