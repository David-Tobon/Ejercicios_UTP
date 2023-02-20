/*  

   - 15 Febrero 2023 - 17:50
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONVERTIR DE MINUTOS A HORAS

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una operacion
   matematica el total horas totales que hay en una cantidad determinada de minutos con valores dados por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos


int main(){

int minutos = 0;   // Esta variable la usaremos para almacenar la entrada de usuario
int horas = 0;     // Esta variable la usaremos para almacenar la entrada de usuario
int total = 0;     // Aqui almacenaremos el resultado de la operación matematica

printf("Ingresa la cantidad de minutos que quieres convertir a horas: "); // Funciones para pedir los datos al usuario
scanf("%d", &minutos);

horas = minutos / 60;  
total = minutos % 60;    // Operación matematica, asignandole el valor directamente a la variable

printf("%d Minutos son %d horas y %d minutos.", minutos , horas , total); // Imprimir el resultado Final almacenado en las variables









return 0;
}

