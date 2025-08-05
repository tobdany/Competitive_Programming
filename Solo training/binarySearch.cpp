#include <iostream>
#include <vector>
#include <algorithm>

//https://codeforces.com/gym/106017/problem/A

using namespace std;

// Función para contar cuántas sumas son menores o iguales a 'x' en O(N)
long long count_le(long long mid, const vector<int>& A) {
    long long count = 0;
    int tamano = A.size();
    int j = tamano - 1; // Puntero al final del arreglo
    
    // Recorremos el arreglo con 'i' y 'j'
    for (int i = 0; i < tamano; i++) {
        while (j >= 0 && A[i] + A[j] > mid) {
            j--;
        }
        count += (j + 1);
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        int N;
        long long k; // k puede ser N^2, por lo que es mejor que sea long long
        cin >> N >> k;
        
        vector<int> A(N);
        for(int j = 0; j < N; j++) {
            cin >> A[j];
        }
        
        sort(A.begin(), A.end());
        
        // Uso de long long para evitar desbordamientos
        long long low = (long long)A[0] + A[0];
        long long high = (long long)A[N - 1] + A[N - 1]; // Acceso correcto al último elemento
        long long ans = high;
        
        while(low <= high) {
            long long mid = low + (high - low) / 2;
            long long count = count_le(mid, A);
            
            if(count >= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << ans << "\n"; // Imprime la respuesta correcta
    }
    
    return 0;
}