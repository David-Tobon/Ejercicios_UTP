/*  

   - 15 Febrero 2023 - 20:05
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CALCULAR EL ANGULO RESTANTE DE UN TRIANGULO

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una operacion
   matematica el angulo restante de un triangulo con dos valores en angulos dados por el usuario.

*/ 
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

float angulo_uno = 0;       // Esta variable la usaremos para almacenar la entrada de usuario
float angulo_dos = 0;       // Esta variable la usaremos para almacenar la entrada de usuario
float angulo_faltante = 0;  // Aqui almacenaremos el resultado de la operación matematica

printf("Ingrese el valor del primer angulo: "); // Funciones para pedir los datos al usuario
scanf("%f", &angulo_uno);

printf("Ingrese el valor del segundo angulo: "); // Funciones para pedir los datos al usuario
scanf("%f", &angulo_dos);

angulo_faltante = 180 - (angulo_uno + angulo_dos);  // Operación matematica, asignandole el valor directamente a la variable

// Evaluamos la condición de que el usuario haya digitado valores en un rango entre 0 y 180
if (angulo_uno < 0 || angulo_uno > 180 || angulo_dos < 0 ||  angulo_dos > 180  )
{
    printf("Por favor ingresa un los números en un rango de 0° a 180°"); // En caso de digitar un numero fuera del rango, le pedira al usuario digitarlos de nuevo
}
else{
    printf("El valor del angulo restante es de %.2f grados, del triangulo con los angulos %.2f grados y %.2f grados", angulo_faltante, angulo_uno, angulo_dos);
} // Finalmente sí el usuario digita estos valores en el rango correcto, calculará el angulo faltante e imprimirá el resultado


return 0;
}
