#include <iostream>
using namespace std;

// Función para encontrar la posición de un número en la secuencia de Fibonacci de manera iterativa.
int findFibonacciPosition(int target) {
    if (target == 0) return 0;
    if (target == 1) return 1;

    int a = 0, b = 1, pos = 1;
    while (b < target) {
        int temp = b;
        b = a + b;
        a = temp;
        pos++;
    }

    if (b == target) {
        return pos; // Encontramos el número en la secuencia
    } else {
        return -1; // El número no pertenece a la secuencia de Fibonacci
    }
}

int main() {
    int number;
    //cout << "Introduce un número para encontrar su posición en la sucesión de Fibonacci: ";
    cin >> number;

    int position = findFibonacciPosition(number);

    /*if (position != -1)
        cout << "El número " << number << " ocupa la posición " << position << " en la sucesión de Fibonacci." << endl;
    else
        cout << "El número " << number << " no pertenece a la sucesión de Fibonacci." << endl; */

        cout << position;

    return 0;
}
