#include <iostream>
#include <vector>
using namespace std;

// Función para generar la secuencia de Fibonacci hasta que el valor objetivo se encuentre o se exceda.
vector<int> generateFibonacci(int max) {
    vector<int> fib = {0, 1};
    while (true) {
        int next = fib.back() + fib[fib.size() - 2];
        if (next > max) break;
        fib.push_back(next);
    }
    return fib;
}

// Función para realizar la búsqueda binaria y encontrar la posición del número objetivo.
int binarySearch(const vector<int>& fib, int target) {
    int left = 0, right = fib.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (fib[mid] == target) return mid;
        if (fib[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Devuelve -1 si el número no es parte de la sucesión.
}

int main() {
    int number;
    //cout << "Introduce un número para encontrar su posición en la sucesión de Fibonacci: ";
    cin >> number;

    vector<int> fibonacciSequence = generateFibonacci(number);
    int position = binarySearch(fibonacciSequence, number);

    cout << position;

    return 0;
}
