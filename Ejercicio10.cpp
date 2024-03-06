#include <iostream>

void Ejercicio10() {
    int N;
    std::cout << "Ingrese el numero N: ";
    std::cin >> N;
    std::cout << "Multiplos de " << N << " menores que 100:" << std::endl;

    for (int i = 1; i < 100; ++i) { // Cambio aquí: usar i < 100 en lugar de i <= 100
        if (i % N == 0) { // Verifica si i es múltiplo de N
            std::cout << i << std::endl;
        }
    }
}
