void setup()
{
  Serial.begin (9600); //initialisiert die Serielle Schnittstelle mit Datenrate 9600bit/sec
  pinMode(A0, INPUT);//Konfiguriert den spezifizierten Pin als Input oder Output.
  pinMode(5, INPUT); //Konfiguriert den spezifizierten Pin als Input oder Output.
}

void loop()
{
   int DigitalA0 = digitalRead(A0);// int Definiert eine Variable - digitalRead liest einen Wert von einem vorgegebenen Digitalpin ein, entweder HIGH oder LOW.
   int Poti = analogRead(A0);//* int Definiert eine Variable - analogread liest den Wert vom angegebenen analogen Pin ein. Eingangspannung zwischen 0 und 5V und Integer-Werte 0 bis 1023
   int Digital5 = digitalRead(5);//* int Definiert eine Variable - digitalRead liest einen Wert von einem vorgegebenen Digitalpin ein, entweder HIGH oder LOW.
   
   analogRead(A0);
   Serial.print("SpannungVolt: "); // Gibt den Daten als lesbaren text.
   Serial.print(Poti/1023.0*5.0); // Gibt den Daten als lesbaren text.
   Serial.println("V");// Gibt den Daten als lesbaren text und danach Zeilenumbruch.
   
   
   Serial.print("DigitalA0: ");// Gibt den Daten als lesbaren text.
   Serial.println(DigitalA0);// Gibt den Daten als lesbaren text und danach Zeilenumbruch.
   
   Serial.print("Digital5: ");// Gibt den Daten als lesbaren text.
   Serial.println(Digital5);// Gibt den Daten als lesbaren text und danach Zeilenumbruch. 
   delay(500);//Unterbricht das Programm für die als Parameter angegebene Zeit (Zeit in Milisekund).


  

   
}
