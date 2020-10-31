void setup()
{

pinMode(A0,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop()
{



float valorLDR,rl,il,v,a;
delay (1000);
valorLDR = analogRead(A0);

valorLDR=(valorLDR*5/1023);
Serial.print("El Voltaje es de = ");
Serial.println(valorLDR);
Serial.println("Ohms");
v=(5/valorLDR)-1;
rl=613.49*v;
il=pow((rl/126951),-1.1655);


//Serial.print("El voltaje es = ");
///Serial.println(rl);
Serial.print("El Il es de= ");
Serial.println(il);
Serial.println("LUXES");

Serial.println("El foco se encendera cuando el valor de limunocidad sea menor a 2000 LUXES");
if (il<=2000)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
}
