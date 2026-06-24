#include <iostream>
#include <vector>
using namespace std;


vector<int> generateFibonacci(int max){
    vector<int> fib={0,1};
    while(true){
        int next=fib.back()+fib[fib.size()-2];
        if(next>max) break;
        fib.push_back(next);
        

    }
    return fib;
}

int binarySearch(const vector<int>&fib, int target){
    int left=0,right=fib.size()-1;
    while (left<=right){
        int mid=left+(right-left)/2;
        if (fib[mid]==target) return mid;
        if (fib[mid]<target)
            left=mid+1;
        else
            right=mid-1;

    }
    return -1;
}

int main(){

    int x;
    cin >> x;
    vector<int> fibonacciSequence = generateFibonacci(x);
    int position=binarySearch(fibonacciSequence,x);

    return 0;
}

//https://medium.com/techie-delight/binary-search-practice-problems-4c856cd9f26c