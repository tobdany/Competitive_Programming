#include <bits/stdc++.h>
using namespace std;
map<int,int> mapa;
///mapa[1]=1;


 int gridTraveler(int m,int n,vector<vector<int>> &memo){
    
    int key=m+n;
    if(memo[m][n]!=-1){
        return memo[m][n];
    }
    if(m==1 && n==1) return 1;
    if(m==0 || n==0) return 0;
    memo[m][n]=gridTraveler(m-1,n,memo)+gridTraveler(m,n-1,memo); //resta uno a la fila, resta uno a la columna
    return memo[m][n];
 }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m=3,n=2;
    vector<vector<int>> memo(m+1,vector<int>(n+1,-1));
     cout<< gridTraveler(m,n,memo);

}