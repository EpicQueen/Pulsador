/*Cambia el estado de un led con un solo botón.
        ON-OFF  */

int boton1 = 3;  //Inicializa boto1 en el PIN3
int led1 = 8;  

int estado_boton1;

int estado_anterior= 0;

void setup() {
  pinMode(boton1, INPUT);
  pinMode(led1, OUTPUT);

}

void loop() {

estado_boton1 = digitalRead(boton1);
 
//FUNCIONES ANIDADAS
if (estado_boton1 == HIGH) { //Pregunta Si:-> El botón ha sido presionado ??
  
if (estado_anterior == 0) //Pregunta Si:-> La variable 'estado_anterior=0 ??
  {
    digitalWrite(led1, HIGH);
    estado_anterior = 1;
  }
     else   // Si no: ->
           if (estado_anterior == 1) //Pregunta Si:-> La variable 'estado_anterior=1 ??
              {digitalWrite(led1, LOW);  //Si NO es =0...
                estado_anterior = 0; }

delay(200); // retardo de lectura del pulsador
}
}

