/*  

   - 15 Febrero 2023 - 20:30
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONVERSOR DE MPH A MS

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar la conversion de MPH a MS mediante una operacion
   matematica con un valor  dado por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

float millas_hora = 0;       // Esta variable la usaremos para almacenar la entrada de usuario
float metros_segundo = 0;    // Aqui almacenaremos el resultado de la operación matematica


printf("Digita la velocidad en millas: "); // Funciones para pedir los datos al usuario
scanf("%f", &millas_hora);


 metros_segundo = ( millas_hora * 1609.344 ) / 3600; // Operación matematica, asignandole el valor directamente a la variable


printf("%.2f Millas por Hora son %.2f Metros por segundo ", millas_hora, metros_segundo); // Imprimir el resultado Final almacenado en las variables










return 0;
}
