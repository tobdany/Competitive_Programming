#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void sleeve(int n){
    bool isPrime[n+1];
    memset(isPrime,true,sizeof(isPrime));

    for (int p=2;p*p<=n;p++){
        if (isPrime[p]==true){
            
            for (int i = p*p ; i<=n ; i+=p ){
                isPrime[i]=false;
            }
        }
    }

    for (int i=2;i<=n;i++){
        if (isPrime[i]==true)
        cout << i << " ";
    }

}


int main(){
    cout << "Ingresa un número" << endl;
    int n;
    cin >> n;

    sleeve(n);

    return 0;
}