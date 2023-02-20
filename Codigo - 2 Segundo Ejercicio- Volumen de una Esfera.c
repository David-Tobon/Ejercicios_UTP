/*  

   - 15 Febrero 2023 - 11:15
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Sintaxis del ejercicio:
   Se desarolla un programa en 'C' que calcula el volumen de una esfera de un radio dado por el usuario
   posteriormente calcula el resultado mediante una formula matematica e imprime el resultado

*/ 
#include <stdio.h>    // Inicialización de las librerias con las cuales trabajamos

#define PI  3.1415926  // Se establece una constante para definir el número PI


int main(){

float radio = 0;   // En esta variable almacenaremos los datos ingresados por el usuario
float volumen = 0; // En esta variable almacenamos el resultado de la operación matematica

printf("Ingresa el valor del radio de la esfera: ");    // Funciones para pedir los datos al usuario
scanf("%f", &radio);


volumen = ( (4 / 3) * PI) * radio * radio * radio;  // Operación matematica, asignandole el valor directamente a la variable


printf("El volumen de la esfera de radio %.2f es %.2f ", radio , volumen); // Imprimir el resultado Final almacenado en las variables








    return 0;
}

