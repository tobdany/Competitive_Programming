#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<string,long> temp;

long gridTraveler(int m, int n){
    string key = to_string(m) + ',' + to_string(n);
    if ( temp.find(key) != temp.end() ) return temp[key];
    if ( m == 1 && n == 1 ) return 1;
    if ( m == 0 || n == 0 ) return 0;
    return temp[key] = gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
}

int main(){
    cout << "hola mundo" << "\n";
    cout << gridTraveler(1,1) << "\n"; //1
    cout << gridTraveler(2,3) << "\n";; //3
    cout << gridTraveler(3,2) << "\n";; //3
    cout << gridTraveler(3,3) << "\n";; //6
    cout << gridTraveler(18,18) << "\n";; //2333606220

    return 0;
}