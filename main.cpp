#include <iostream>
#include <limits>

// Aquí pondrías las declaraciones de las funciones de los ejercicios
void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Ejercicio4();
void Ejercicio5();
void Ejercicio6();
void Ejercicio7();
void Ejercicio8();
void Ejercicio9();
void Ejercicio10();
// ... y así sucesivamente para cada ejercicio

int main() {
    int ejercicio;
    while (true) {
        std::cout << "Ingrese el numero del ejercicio que desea ejecutar (1-10) o 0 para salir: ";
        std::cin >> ejercicio;

        if (std::cin.fail() || ejercicio < 0 || ejercicio > 10) {
            std::cout << "Numero de ejercicio inválido. Intente de nuevo." << std::endl;
            // Limpia el estado de cin y ignora la entrada hasta el siguiente salto de línea.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (ejercicio == 0) {
            break; // Salir del bucle si el usuario ingresa 0.
        }

        switch (ejercicio) {
            case 1:
                Ejercicio1();
                break;
            case 2:
                Ejercicio2();
                break;
            case 3:
                Ejercicio3();
                break;
            case 4:
                Ejercicio4();
                break;
            case 5:
                Ejercicio5();
                break;
            case 6:
                Ejercicio6();
                break;
            case 7:
                Ejercicio7();
                break;
            case 8:
                Ejercicio8();
                break;
            case 9:
                Ejercicio9();
                break;
            case 10:
                Ejercicio10();
                break;
            // ... agregar casos para cada uno de los ejercicios
            default:
                std::cout << "Ejercicio no implementado." << std::endl;
                break;
        }
    }
    return 0; // Añade un retorno al final de la función main
}
