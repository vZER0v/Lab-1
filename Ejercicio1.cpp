#include <iostream>

void Ejercicio1() {
    int A, B;
    std::cout << "Ingrese el numero A: ";
    std::cin >> A;
    std::cout << "Ingrese el numero B: ";
    std::cin >> B;
    if(B == 0) {
        std::cout << "Error: No se puede dividir entre cero." << std::endl;
    } else {
        std::cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << std::endl;
    }
}
