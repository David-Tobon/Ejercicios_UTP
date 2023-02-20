/*  

   - 15 Febrero 2023 - 18:10
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONCATENAR CADENA DE TEXTO

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar una concatenacion de cadenas
   de texto con una serie de variables dadas por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

char nombre[15];     // Esta variable la usaremos para almacenar la entrada de usuario
char apellido[15];   // Esta variable la usaremos para almacenar la entrada de usuario
int edad = 0;        // Esta variable la usaremos para almacenar la entrada de usuario

printf("Ingresa tu nombre: ");   // Funciones para pedir los datos al usuario
scanf("%s",nombre);

printf("Ingresa tu apellido: "); // Funciones para pedir los datos al usuario
scanf("%s",apellido);

printf("Ingresa tu edad: ");     // Funciones para pedir los datos al usuario
scanf("%d",&edad);

printf("Hola, %s %s tienes %d años", nombre , apellido , edad); // Imprimir el resultado Final almacenado en las variables







return 0;
}

