int data, val;
int pinoP = A0;

void setup() { 
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(7, OUTPUT); //make the LED pin (13) as output
  pinMode(pinoP, INPUT);
  digitalWrite (7, LOW);
}
 
void loop() {
Serial.println(analogRead(pinoP));

while (Serial.available()){
  data = Serial.read();
}

if (data == '1')
digitalWrite (7, HIGH);

else if (data == '0')
digitalWrite (7, LOW);
delay(25);

}
