#include <iostream>
using namespace std;

int main(){

    int N,W,V,A;
    cin >> N >> W >> V;

    A=W/V;
    if(A>=N)
    cout <<1 << endl;
    else
    cout <<0 << endl;
    return 0;
}