#include<iostream>
using namespace std;

int sizeE = 25;

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 
		41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int binarySearch(int x) {
	int min = 0;
	int max = sizeE - 1;
	while (min <= max) {
		int guess = min + (max - min) / 2;
		if (primes[guess] == x) {
			return guess;
		} else if (primes[guess] < x) {
			min = guess + 1;
		} else {
			max = guess - 1;
		}
	}
	return -1;
}

int main() {
	int x;
	cin >> x;
	int position = binarySearch(x);
	cout << position << endl;
	return 0;
}