#include <iostream>
void Ejercicio5() {
    int A, B;
    std::cout << "Ingrese el numero A: ";
    std::cin >> A;
    std::cout << "Ingrese el numero B: ";
    std::cin >> B;
    std::cout << A << "/" << B << "=" << (A + B / 2) / B << std::endl; // Redondeo al más cercano
}
