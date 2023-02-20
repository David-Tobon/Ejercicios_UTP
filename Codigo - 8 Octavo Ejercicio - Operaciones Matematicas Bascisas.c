/*  

   - 15 Febrero 2023 - 18:30
   - v 1.0
   - Autor Ing(c). Juan David Tobón Castañeda
   - Lenguaje de Programación C
   - Version del lenguaje Utilizado : 5.11
   - Presentado a: Doctor Ricardo Moreno Laverde
   - Universidad Tecnológica de Pereira
   - Programa de Ingeniería de Sistemas y Computación

   Ejercicio: CALCULADORA MATEMATICA

   Sintaxis del ejercicio:
   Se desarolla un programa en el lenguaje de programación C, que permite realizar mediante una serie operaciones
   matematicas el total de suma, resta, multiplicacion y division con dos valores dados por el usuario.

*/
#include <stdio.h> // Inicialización de las librerias con las cuales trabajamos

int main(){

float numero_uno = 0;    // Esta variable la usaremos para almacenar la entrada de usuario
float numero_dos = 0;    // Esta variable la usaremos para almacenar la entrada de usuario

    printf("Ingresa el primer numero: ");   // Funciones para pedir los datos al usuario
    scanf("%f", &numero_uno);

    printf("Ingresa el segundo numero: ");  // Funciones para pedir los datos al usuario
    scanf("%f", &numero_dos);


printf("%.2f más %.2f es igual a: %.2f ", numero_uno, numero_dos, (numero_uno + numero_dos));   // Suma 
printf("%.2f menos %.2f es igual a: %.2f ", numero_uno, numero_dos, (numero_uno - numero_dos)); // Resta
printf("%.2f por %.2f es igual a: %.2f ", numero_uno, numero_dos, (numero_uno * numero_dos));   // Multiplicación

if (numero_dos == 0)  // Preguntamos al programa sí el resultado almacenado en la variable número 2 es igual a 0
{
    printf("No se puede dividir por cero.");  // Sí es correcto imprimimos que no es posible dividir por cero
}
else { // En caso de ser diferente, añadimos el resultado a la lista.
    printf("%.2f dividido %.2f es igual a: %.2f ", numero_uno, numero_dos, (numero_uno / numero_dos)); 
}


return 0;
}