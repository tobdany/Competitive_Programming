#include <iostream>
#include <vector>

void cribaDeEratostenes(int n) {
    // Creamos un vector de booleanos con tamaño n+1, inicializado en true
    std::vector<bool> esPrimo(n + 1, true);
    esPrimo[0] = esPrimo[1] = false; // 0 y 1 no son primos

    // Aplicamos el algoritmo de la criba
    for (int i = 2; i * i <= n; i++) {
        if (esPrimo[i]) {
            for (int j = i * i; j <= n; j += i) {
                esPrimo[j] = false; // Marcamos como no primo
            }
        }
    }

    // Imprimimos los números primos encontrados
    std::cout << "Números primos menores o iguales a " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (esPrimo[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Introduce un número: ";
    std::cin >> n;
    cribaDeEratostenes(n);
    return 0;
}
