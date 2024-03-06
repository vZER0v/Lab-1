#include <iostream>
void Ejercicio7() {
    int N;
    std::cout << "Ingrese el numero N: ";
    std::cin >> N;
    int suma = 0;
    for (int i = 0; i <= N; ++i) {
        suma += i;
    }
    std::cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << std::endl;
}
