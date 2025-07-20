#include <iostream>
#include <algorithm>
using namespace std;


int binarySearch(int litros[],int total,int limite){
    int izquierda=0;
    int derecha=total-1;
    while (izquierda<=derecha){
        int mid=izquierda+(derecha-izquierda)/2;
        if (litros[mid]==limite) return mid;
        if (litros[mid]<limite) 
        izquierda=mid+1;
        else
        derecha=mid-1;

    }
    return -1;
}

int main(){
    int Q,N;
    cin >> Q >> N;
    int litros[N];

    for(int i=0;i<N;i++){
        cin >> litros[i];
    }

    sort(litros, litros+N);
    for (int i=0;i<N;i++)
    cout << litros[i];

    
    int G; //deberia recibir varios
    cin >> G;

    binarySearch(litros,N,G);
    



    return 0;
}