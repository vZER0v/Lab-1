#include <iostream>
void Ejercicio4() {
    int A, B;
    std::cout << "Ingrese el numero A: ";
    std::cin >> A;
    std::cout << "Ingrese el numero B: ";
    std::cin >> B;
    std::cout << "El menor es " << (A < B ? A : B) << std::endl;
}
