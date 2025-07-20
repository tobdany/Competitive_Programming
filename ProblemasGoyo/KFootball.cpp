#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    long N,G,S,R;
    vector<long> perdidas;
    long puntos=0;
    long empates=0;
    int Gempate=0;
    int sumaConvEmpate=0;
    int sumaConvVictoria=0;

    while(cin >> N >> G){
        puntos=0;
            empates=0;
            perdidas.erase(perdidas.begin(),perdidas.end());

        for(int i=0;i<N;i++){
            
            //cout << N << "\n";
            cin >> S >> R;

           
                if((S-R)>0){
                    puntos+=3;
                }else{
                    perdidas.push_back(R-S); //cuando perdieron
                }
                
            
            
            
        }

        sort(perdidas.begin(),perdidas.end());
           
       
            for(auto x:perdidas){
                if(x<=G){
                    G-=x; //RESTA LO SUFICIENTE PARA DEJARLO EN EMPATE
                    puntos++; //AGREGA PUNTOS DE EMPATE
                    if(G>0){ //CONFIRMA QUE TODAVIA PUEDE RESTARLE UNA VEZ MAS
                        puntos+=2; //PUNTOS DE VICTORIa
                        G--;
                    }
                }

                
            }
            
        
        
        cout << puntos << "\n";
       
        
        

    }


    /*
2 1
1 1
1 1
3 2
1 3
3 1
2 2
4 10
1 1
2 2
1 3
0 4

    */

    return 0;
}