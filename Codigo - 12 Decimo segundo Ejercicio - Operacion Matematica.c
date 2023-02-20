/*  

   - 17 Febrero 2023 - 00:50
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: OPERACIÓN MATEMATICA I

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar una operación matematica de la formula anexada

*/ 
#include <math.h>       // Inicialización de las librerias con las cuales trabajamos
#include <stdio.h>

int main(){

float total = 0;     // Aqui almacenaremos el resultado de la operación matematica

total = ( (17.0 / 11.0 ) + ( 23.0 / 2.0 ) ) / ( ( 943.0 / 120.0 ) + sqrt(144) ); // Operación matematica, asignandole el valor directamente a la variable


printf("El resultado total es : %f", total); // Imprimir el resultado Final almacenado en las variables
















return 0;
}

