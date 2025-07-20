#include <iostream>
#include <set>

using namespace std;


int main(){
    set<int>val;
    string numero;
    cin >> numero;

    for(char x:numero){
        if(x!='-'){
            x=x-'0';
        val.insert(x);
        //cout << x << endl;
        }
        
    }

    cout << val.size() << endl;

    return 0;
}