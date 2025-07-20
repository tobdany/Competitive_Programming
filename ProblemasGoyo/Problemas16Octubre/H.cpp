#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A[3];
    cin >> A[0] >> A[1] >> A[2];

    int temp,suma=0;
    for(int i=0;i<3;i++){
        cin >> temp;
        //cout << A[i]-temp;
        if(A[i]-temp<0){
        suma-=A[i]-temp;

        }
    }

    cout << suma << "\n";


    return 0;
}