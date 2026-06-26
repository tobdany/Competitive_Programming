#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;
bool canSum(int targetSum, const vector<int> &numbers, unordered_map<int, bool> &memo)
{
	if (targetSum == 0)
		return true;
	if (targetSum < 0)
		return false;
	if (memo.find(targetSum) != memo.end())
		return memo[targetSum];

	for (auto x : numbers)
	{
		int remainder = targetSum - x;
		if (canSum(remainder, numbers, memo) == true)
		{
			return memo[targetSum] = true;
		}
	}

	return memo[targetSum] = false;
}

bool canSumHelper(int targetSum, const vector<int> &numbers)
{
	unordered_map<int, bool> memo;
	return canSum(targetSum, numbers, memo);
}

int main()
{
	cout << canSumHelper(7, {2, 3}) << "\n";
	cout << canSumHelper(7, {5, 3, 4, 7}) << "\n";
	cout << canSumHelper(7, {2, 4}) << "\n";
	cout << canSumHelper(8, {2, 3, 5}) << "\n";
	cout << canSumHelper(300, {7, 14}) << "\n";
	return 0;
}