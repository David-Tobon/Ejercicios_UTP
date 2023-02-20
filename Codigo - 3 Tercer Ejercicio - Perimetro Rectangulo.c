/*  

   - 15 Febrero 2023 - 11:40
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CALCULAR EL PERIMETRO DE UN RECTANGULO

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una operacion
   matematica el total del perimetro de un rectangulo mediante el largo y ancho del mismo con valores dados por el usuario.

*/ 

#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

float largo = 0;        // Esta variable la usaremos para almacenar la entrada de usuario
float ancho = 0;        // Esta variable la usaremos para almacenar la entrada de usuario
float perimetro = 0;    // Aqui almacenaremos el resultado de la operación matematica

printf("Ingresa el valor del largo rectangulo ");   // Funciones para pedir los datos al usuario
scanf("%f", &largo );

printf("Ingresa el valor del ancho rectangulo ");   // Funciones para pedir los datos al usuario
scanf("%f", &ancho );


perimetro = ( largo * 2) + ( ancho * 2);    // Operación matematica, asignandole el valor directamente a la variable

printf("El perimetro del rectangulo que posee un largo de %.2f y ancho de %.2f posee un diametro de %.2f ", largo, ancho, perimetro);
// Imprimir el resultado Final almacenado en las variables






return 0;
}

