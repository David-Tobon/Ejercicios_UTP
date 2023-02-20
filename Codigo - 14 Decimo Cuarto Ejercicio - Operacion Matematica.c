/*  

   - 17 Febrero 2023 - 02:50
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: OPERACIÓN MATEMATICA III CON ENTRADA DE USUARIO

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar una operación matematica de la formula anexada 
   con entrada de usuario
*/ 
#include <math.h>       // Inicialización de las librerias con las cuales trabajamos
#include <stdio.h>

int main(){

float x = 0;            // Esta variable la usaremos para almacenar la entrada de usuario
float total = 0;        // Aqui almacenaremos el resultado de la operación matematica

printf("Introduce el valor de X: ");    // Funciones para pedir los datos al usuario
scanf("%f",&x);

total = ( ( ( ( x / 2.0) + (sqrt(x)/x) + 20.0) / (16.0/x) ) /                   
    (( ( (1.0 / 2.0) - (3.0 / 4.0) + x) / ( (2.0 / 17.0)) ) + x ) ) 
    + pow(x , 2) ;          // Operación matematica, asignandole el valor directamente a la variable



printf("El resultado para un valor de x = %.2f es igual a %f", x , total);  // Imprimir el resultado Final almacenado en las variables









return 0;
}

