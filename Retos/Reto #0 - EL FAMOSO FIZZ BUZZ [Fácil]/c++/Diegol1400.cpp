#include <iostream>

/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <iostream>

int main() {
    // Itera sobre los números del 1 al 100.
    for (int i = 1; i <= 100; i++) {
        // Verifica si el número es múltiplo de 3 y de 5.
        if (i % 3 == 0 && i % 5 == 0) {
            // Si es múltiplo de 3 y de 5, imprime "fizz buzz".
            std::cout << "fizz buzz\n";
        } else if (i % 3 == 0) {
            // Si es múltiplo de 3 pero no de 5, imprime "fizz".
            std::cout << "fizz\n";
        } else if (i % 5 == 0) {
            // Si es múltiplo de 5 pero no de 3, imprime "buzz".
            std::cout << "buzz\n";
        } else {
            // Si no es múltiplo ni de 3 ni de 5, imprime el número.
            std::cout << i << "\n";
        }
    }

    return 0;
}
