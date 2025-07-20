#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,t;
    char letra;
    cin >> n >> t;
    int r1,r2,temp;
    vector<int> reservados;
    

    for(int i=0;i<t;i++){
        cin >> letra;
        if(letra=='A'){
            temp=0;
            cin >> r1 >> r2;
            sort(reservados.begin(),reservados.end());


                for(auto x:reservados){
                    if (x>=r1 && x<=r2){
                        temp++;
                    }
                }
                cout << r2-r1-temp+1 << endl;
            
        }

       
        
        if(letra=='R'){
            cin >> temp;
            reservados.push_back(temp);
        }



    }

/*
20 8
A 5 10
R 6
R 9
R 3
A 5 10
R 13
R 18
A 1 20


*/


    return 0;
}

