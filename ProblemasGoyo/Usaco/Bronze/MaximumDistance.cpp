#include <iostream>
#include <math.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    
    cin >> N;
    int x[N];
    int y[N];
    int temp;

    for(int i=0;i<N;i++){
        cin >> temp;
        x[i]=temp;
    }

    for(int i=0;i<N;i++){
        cin >> temp;
        y[i]=temp;
    }
    int max=0;
    int resultado;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            resultado=(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            if(max<resultado)
            max=resultado;
        }
    }

    cout << max << "\n";

return 0;

}