/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <stdio.h>

int main() {
    // Inicializa la variable numero en 1.
    int numero = 1;
    // Declara variables para determinar si un número es múltiplo de 3 o de 5.
    int multiplo_3, multiplo_5;

    // El bucle se ejecuta mientras el valor de numero sea menor a 100.
    while (numero <= 100) // Corregido para incluir el 100 en el rango.
    {
        // Calcula el residuo de numero al dividirlo entre 3 y 5.
        multiplo_3 = numero % 3;
        multiplo_5 = numero % 5;

        // Si el número es múltiplo de 3 y 5 (es decir, ambos residuos son 0),
        // imprime "fizzbuzz".
        if (multiplo_3 == 0 && multiplo_5 == 0)
        {
            printf("fizzbuzz \n"); // Corregido para coincidir con el enunciado.
        }
        // Si solo es múltiplo de 3, imprime "fizz".
        else if (multiplo_3 == 0)
        {
            printf("fizz \n");
        }
        // Si solo es múltiplo de 5, imprime "buzz".
        else if (multiplo_5 == 0)
        {
            printf("buzz \n");
        }
        // Si no es múltiplo ni de 3 ni de 5, imprime el número.
        else
        {
            printf("%d \n", numero);
        }

        // Incrementa numero en 1 para continuar con el siguiente número.
        numero++;
    }

    // Finaliza la función main con un valor de retorno de 0, indicando que el programa terminó correctamente.
    return 0;
}
