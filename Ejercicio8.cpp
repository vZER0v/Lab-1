#include <iostream>
void Ejercicio8() {
    int N;
    std::cout << "Ingrese el numero N: ";
    std::cin >> N;
    int factorial = 1;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    std::cout << N << "!=" << factorial << std::endl;
}
