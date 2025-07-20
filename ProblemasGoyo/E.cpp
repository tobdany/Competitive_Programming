#include <bits/stdc++.h>
using namespace std;
map<int,int> mapa;

int encuentraPares(int izquierda,int derecha){
    int izquierdaOrg=izquierda;
    int derechaOrg=derecha;
    int temp=0;

    vector<pair<int,int>> izq;
    vector<pair<int,int>> der;

    while(izquierda>0){
        izq.push_back(make_pair(izquierda,izquierdaOrg-izquierda));
        izquierda--;
    }

    while(derecha>0){
        der.push_back(make_pair(derecha,derechaOrg-derecha));
        derecha--;
    }

    


    

}

int main(){
    int N,Y,Z;
    cin >> N >> Y >> Z;
    

    int izquierda=0, derecha=0;
    derecha=N-Y-Z;
    izquierda=Z;
    mapa[Y]=1;

    if(mapa[izquierda]==1){
        izquierda--;
    }

    if(mapa[derecha]==1){
        derecha--;
    }

    if()
    encuentraPares(izquierda,derecha);

    

    return 0;
}