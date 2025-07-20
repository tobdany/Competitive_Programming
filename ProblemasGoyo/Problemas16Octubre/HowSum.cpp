#include <bits/stdc++.h>
using namespace std;
optional<vector<int>> howSum(int targetSum,const vector<int>& numbers){
    if(targetSum==0) return vector<int>{};
    if(targetSum<0) return nullopt;

    for(int num:numbers){
        int remainder=targetSum-num;
        auto remainderResult=howSum(remainder,numbers);

        if(remainderResult.has_value()){
            remainderResult->push_back(num);
            return remainderResult;
        }
    }

    return nullopt;



}

void printResult(optional<vector<int>>&result){
    if(result.has_value()){
        for(int num:result.value()){
            cout << num << " ";
        }
        cout << endl;
    }else{
        cout << "null" << endl;
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    printResult(howSum(7, {2, 3}));     // [3, 2, 2]
    printResult(howSum(7, {5, 3, 4, 7})); // [4, 3] o [7]
    printResult(howSum(7, {2, 4}));     // null
    printResult(howSum(8, {2, 3, 5}));  // [2, 2, 2, 2] o [3, 5]
    printResult(howSum(300, {7, 14}));  // null



    return 0;


}