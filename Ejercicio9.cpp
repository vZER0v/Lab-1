#include <iostream>
void Ejercicio9() {
    float N;
    std::cout << "Ingrese el radio N: ";
    std::cin >> N;
    float perimetro = 2 * 3.1416 * N;
    float area = 3.1416 * N * N;
    std::cout << "Perimetro: " << perimetro << std::endl;
    std::cout << "Area: " << area << std::endl;
}
