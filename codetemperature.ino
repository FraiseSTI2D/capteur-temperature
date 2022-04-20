#include <LiquidCrystal.h>

LiquidCrystal ldc(12, 11, 5, 4, 3, 2);

int a = 0;

void setup() 
{
    pinMode(A0, INPUT);
    pinMode(7, OUPTUT);
    pinMode(8, OUPTUT);
    pinMode(9, OUPTUT);

    lcd.begin(16, 2);
    lcd.print("Temperature=");

}

void loop()
{
    int a = -40+0.488155 * (analogeRead(A0) -20);
    lcd.setCursor(1, 1);
    lcd.print(a);
    if ( 100 > a > -40)
    {
        lcd.print(" ");
    }
    else
    {
        lcd.print(a);
    }
    
    if(a>=100)
    {
        delay(100);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
    }
    else 
    {
        delay(100);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
    }
}

