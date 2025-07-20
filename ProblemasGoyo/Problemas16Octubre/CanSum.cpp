#include <bits/stdc++.h>
using namespace std;
bool canSum(int targetSum, const vector<int> &numbers,unordered_map<int,bool>&memo){
    if(memo.find(targetSum)!=memo.end()) return memo[targetSum]; //diferente de memo.end por como esta escrito la fx de .find()
    if(targetSum==0){
        memo[targetSum]=true;
        return true;
    }
    if(targetSum<0) return false; 

    for(auto num:numbers){
        int remainder=targetSum-num;
        //el remainder no puede ser negativo
        if(canSum(remainder,numbers,memo)==true){
            return true;
        }
    }



    return false; //se regresa false hasta el final, pq
    //quiere decir que es imposible que se genere
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map<int,bool> memo;
    cout << canSum(5,{1,1,1},memo) << "\n";
    /*cout << canSum(7, {2,3},memo) << "\n";
    cout << canSum(7, {5,3,4,7},memo) << "\n";
    cout << canSum(7, {2,4},memo) << "\n";
    cout << canSum(8, {2,3,5},memo) << "\n";
    //cout << canSum(300, {7,14},memo) << "\n";
    */
    return 0;


}