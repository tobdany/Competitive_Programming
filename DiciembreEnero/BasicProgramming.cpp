#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, t;
    scanf("%d %d", &N, &t);
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    string resultado = "";
    long long suma = 0;

    switch (t) {
        case 1:
            printf("7\n");
            break;

        case 2:
            printf("%s\n", (A[0] > A[1]) ? "Bigger" : (A[0] == A[1]) ? "Equal" : "Smaller");
            break;

        case 3:
            if (N >= 3) { 
                vector<int> temp = {A[0], A[1], A[2]};
                sort(temp.begin(), temp.end());
                printf("%d\n", temp[1]); // La mediana es el segundo número después de ordenar
            }
            break;

        case 4:
            for (int i = 0; i < N; i++) {
                suma += A[i];
            }
            printf("%lld\n", suma);
            break;

        case 5:
            for (int i = 0; i < N; i++) {
                if (A[i] % 2 == 0) suma += A[i];
            }
            printf("%lld\n", suma);
            break;

        case 6:
            for (int i = 0; i < N; i++) {
                char letra = 'a' + (A[i] % 26);
                resultado += letra;
            }
            printf("%s\n", resultado.c_str());
            break;

        case 7:
            {
                int i = 0;
                unordered_map<int, bool> visitados;

                while (true) {
                    if (i >= N) {
                        printf("Out\n");
                        break;
                    }
                    if (i == N - 1) {
                        printf("Done\n");
                        break;
                    }
                    if (visitados.count(i)) {
                        printf("Cyclic\n");
                        break;
                    }

                    visitados[i] = true;
                    i = A[i];
                }
            }
            break;
    }

    return 0;
}
