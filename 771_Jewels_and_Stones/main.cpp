#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int count = 0;
		for (int i = 0; i < S.length(); i++)
		{
			if (J.find(S[i]) != string::npos)count++;
		}
		return count;
	}
};

int main() {
	string J = "aA";
	string S = "aAAbbbb";
	Solution s = Solution();
	cout << s.numJewelsInStones(J, S);

	return 0;
}