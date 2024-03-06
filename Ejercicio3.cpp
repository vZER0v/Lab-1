#include <iostream>
void Ejercicio3() {
    int A, B;
    std::cout << "Ingrese el numero A: ";
    std::cin >> A;
    std::cout << "Ingrese el numero B: ";
    std::cin >> B;
    std::cout << "El mayor es " << (A > B ? A : B) << std::endl;
}
