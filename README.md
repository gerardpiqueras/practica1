# practica 1: Blink
El objeticvo de la practica es producir el parpadeo periodico de un led. Se utilizara la salida serie para depurar el programa.

Dentro del programa assignaremos un pin para nuestro led, en este caso el 13.

En el void setup() utilizaremos la funcion pinMode(led, OUTPUT) para configurar el pin assignado como salida (output).

En el void loop usaremos las funciones digitalWrite(led, HIGH) y digitalWrite(led, LOW) para encender y apagar el led y las funciones Serial.printIn("ON") y  Serial.printIn("OFF") para mostrar por pantalla el estado del led.
