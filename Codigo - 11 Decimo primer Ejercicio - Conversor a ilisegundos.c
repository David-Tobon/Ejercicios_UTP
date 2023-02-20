/*  

   - 15 Febrero 2023 - 20:50
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONVERSOR DE HORAS: MINUTOS : SEGUNDOS (00:00:00) A MILISEGUNDOS

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar la conversion de HORAS
   MINUTOS Y SEGUNDOS  A MILISEGUNDOS mediante una operacion matematica con unos valores dados por el usuario.

*/ 
#include <stdio.h>  // Inicialización de las librerias con las cuales trabajamos

int main(){

int horas = 0;          // Esta variable la usaremos para almacenar la entrada de usuario    
int minutos = 0;        // Esta variable la usaremos para almacenar la entrada de usuario
int segundos = 0;       // Esta variable la usaremos para almacenar la entrada de usuario
int milisegundos =0;    // Aqui almacenaremos el resultado de la operación matematica

printf("Ingresa la cantidad de Horas, Minutos y Segundos que deseas comvertir: "); // Funciones para pedir los datos al usuario
scanf("%d %d %d", &horas, &minutos, &segundos);

milisegundos = (segundos * 1000)+(minutos * 60 * 1000)+(horas * 60 * 60 * 1000); // Operación matematica, asignandole el valor directamente a la variable

printf("%d:%d:%d son un total de %d", horas , minutos, segundos, milisegundos); // Imprimir el resultado Final almacenado en las variables











return 0;
}
