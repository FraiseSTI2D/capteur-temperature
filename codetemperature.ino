int valeurCapteur;
int valeurTemperature;
long momentAVANT=0;
long momentPRESENT;
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
    momentPRESENT= millis();
    if(momentPRESENT - momentAVANT > 1000)
    {
        momentAVANT = momentPRESENT;
        if( )
    }

}