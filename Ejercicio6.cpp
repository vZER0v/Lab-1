#include <iostream>
void Ejercicio6() {
    int A, B;
    std::cout << "Ingrese la base A: ";
    std::cin >> A;
    std::cout << "Ingrese el exponente B: ";
    std::cin >> B;
    int resultado = 1;
    for (int i = 0; i < B; ++i) {
        resultado *= A;
    }
    std::cout << A << "^" << B << "=" << resultado << std::endl;
}
