/*  

   - 15 Febrero 2023 - 13:20
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONVERTIR DE HORAS A MINUTOS

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una operacion
   matematica el total minutos totales que hay en una cantidad determinada de horas con valores dados por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

int horas = 0;      // Esta variable la usaremos para almacenar la entrada de usuario
int minutos = 0;    // Esta variable la usaremos para almacenar la entrada de usuario
int total = 0;      // Aqui almacenaremos el resultado de la operación matematica

printf("Ingresa la cantidad de Horas: ");   // Funciones para pedir los datos al usuario
scanf("%d",&horas);

printf("Ingresa la cantidad de Minutos: "); // Funciones para pedir los datos al usuario
scanf("%d",&minutos);

total = ( horas * 60 ) + minutos ;  // Operación matematica, asignandole el valor directamente a la variable

printf(" %d Horas y %d Minutos, son en Total: %d minutos", horas , minutos , total); // Imprimir el resultado Final almacenado en las variables









return 0;
}

