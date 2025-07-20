#include <iostream>
#include <algorithm>
#include<map>
#include <vector>
using namespace std;

int main(){
    int N,temp;
    //vector<int> datos;
    map<int,int>datos;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> temp;
        datos[temp]++;
    }

    auto iterator = datos.begin(); // get iterator to first pair
    iterator++; // Now it's an iterator to the second pair
    auto keyVal = iterator->first(); // now keyval is equal to the second key in the map


    return 0;
}