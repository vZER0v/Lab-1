#include <iostream>
void Ejercicio2() {
    int N;
    std::cout << "Ingrese el numero N: ";
    std::cin >> N;
    std::cout << N << " es " << ((N % 2 == 0) ? "par" : "impar") << std::endl;
}
