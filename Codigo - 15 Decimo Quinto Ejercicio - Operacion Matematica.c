/*  

   - 17 Febrero 2023 - 03:30
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: OPERACIÓN MATEMATICA IV CON ENTRADA DE USUARIO

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar una operación matematica de la formula anexada 
   con entrada de usuario

*/ 
#include <math.h>           // Inicialización de las librerias con las cuales trabajamos
#include <stdio.h>

int main(){

float x = 0;            // Esta variable la usaremos para almacenar la entrada de usuario
float total = 0;        // Aqui almacenaremos el resultado de la operación matematica

printf("Introduce el valor de X: ");        // Funciones para pedir los datos al usuario
scanf("%f",&x);

total = (                                   // Operación matematica, asignandole el valor directamente a la variable
    (((( (((x/6.0) + (45.0/x))
    /
    (x - (-8.0/2.0)))
    /
   (12.0 / (sqrt(x))))
    /
   (5.0)) + pow(x,4)) 
   / 
   sqrt(x))
);

printf("El resultado para X = %.2f es igual a : %f ",x , total);     // Imprimir el resultado Final almacenado en las variables


return 0;
}

