#include<iostream>
using namespace std;



int binarySearch(int y,int noChapas,int P[]) { // llave, no de chapas,array de chapas
	int min = 0;
	int max = noChapas - 1;
	while (min <= max) {
		int guess = min + (max - min) / 2;
		if (P[guess] == y) {
			return ++guess;
		} else if (P[guess] < y) {
			min = guess + 1;
		} else {
			max = guess - 1;
		}
	}
	return 0;
}

int main() {
    //M es el no chapa
    //N es eñ no llave
    //P[M] tamaños chapas
    //L[N] tamaños llaves
	int M,N;
	cin >> M;
    int P[M];
    for (int i=0;i<M;i++){
        cin >> P[i];
    }

    cin >> N;
    int y;
   
  for(int i=0;i<N;i++){
        cin >> y;
        int resultado=binarySearch(y,M,P);
        cout << resultado << " ";
   }


    /*
	int position = binarySearch(x);
	cout << position << endl;
    */
	return 0;
}