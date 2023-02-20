/*  

   - 14 Febrero 2023 - 17:00
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Sintaxis del ejercicio:
   Se desarolla un programa en 'C' que convierte los datos ingresados  por el usuario
   con la función SCANF dentro de la libreria de "standard input-output header" 
   ( <stdio> ) y almacenados en la variable ´Celcius´.
   Seguidamente mediante una función matematica almacena el resultado en la 
   variable llamada ´fahrenheit´. 
   Finalmente los datos son impresos en la pantalla mediante la función PRINTF 
   de la misma libreria.

*/ 


#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

 float celcius = 0;    // Esta variable la usaremos para almacenar la entrada de usuario
 float fahrenheit = 0; // Aqui almacenaremos el resultado de la operación matematica

    printf("Ingrese la temperatura en °Celcius: ");   // Funciones para pedir los datos al usuario
    scanf("%f", &celcius);  

  fahrenheit = (celcius * 9/5) + 32; // Operación matematica, asignandole el valor directamente a la variable

    printf("%.2f °Celsius es igual a %.2f ° Fahrenheit.", celcius, fahrenheit); // Imprimir el resultado Final almacenado en las variables



    return 0;
}










