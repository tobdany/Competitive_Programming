#include <bits/stdc++.h>
using namespace std;

int main(){
    int postes,C,meta,temp,suma=1,contador=0;
    cin >> postes >> C >> meta;

    if((abs(suma)%postes)==meta){
            contador++;
        }
    
    //int pasos[C];
    for(int i=0;i<C;i++){
        if(postes==meta){
            meta=0;
        }

        cin >> temp;
        suma+=temp;
      
        if(suma%postes==meta){

            contador++;
        }else{
            if(suma%postes<0){
                suma+=postes;
                if(suma==meta) contador++;
            }
        }

        
    }

    cout << contador <<"\n";

    return 0;
}