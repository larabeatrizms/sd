//pino analógico onde o potenciômetro está conectado.
int const potenciometro = 0; 
int data;
 
//pino digital onde o TIP120 está conectado.
int const transistor = 9;    
 
//armazenará o valor lido no potenciômetro.
int valPotenciometro = 0;    
 
//função setup é executada uma vez quando o arduino é ligado.
void setup() {
 
  //definindo o pino digital 9 como de saída.
  pinMode(transistor, OUTPUT); 
  Serial.begin(9600);
}
 
//Função loop é executada repetidamente enquanto 
//o arduino estiver ligado.
void loop() {    
   
  //lendo o valor do potenciômetro (0 até 1023) e 
  //dividindo por 4 para obter um valor entre 0 e 255
  //que são valores adequados para a base do TIP120.
  valPotenciometro = analogRead(potenciometro);
  Serial.println(valPotenciometro);

  
   
  //atribuindo o valor lido no potenciômetro 
  //a base do TIP120.  
  //analogWrite(transistor, valPotenciometro); 

  while (Serial.available()){
    data = Serial.read();
  }
  
  if (data == '0')
  analogWrite (transistor, 0);
  
  else if (data == '1')
  analogWrite (transistor, 255);

  else if (data == '2')
  analogWrite (transistor, 750);

  else if (data == '3')
  analogWrite (transistor, 1000);
  
  
  delay(25);

} 
