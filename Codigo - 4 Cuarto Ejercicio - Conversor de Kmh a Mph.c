/*  

   - 15 Febrero 2023 - 12:30
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CONVERSOR DE KM/H A MPH

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una operacion
   matematica la conversion de Kilometros por hora a Millas por Hora con valores dados por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

float kilometros = 0;   // Esta variable la usaremos para almacenar la entrada de usuario
float millas = 0;       // Aqui almacenaremos el resultado de la operación matematica

printf("Ingresa el valor de Kilometros por Hora que deseas convertir: ");   // Funciones para pedir los datos al usuario
scanf("%f",&kilometros);

millas = (kilometros / 0.621371); // Operación matematica, asignandole el valor directamente a la variable


printf("%.2f Kilometros/Hora son equivalentes a %.2f Millas/Hora", kilometros, millas); // Imprimir el resultado Final almacenado en las variables












return 0;
}

