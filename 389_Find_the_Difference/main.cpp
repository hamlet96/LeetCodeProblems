#include <vector>

using namespace std;

class Solution {
public:
	char findTheDifference(string s, string t) {
		for (int i = 0; i < s.length();i++){
			t.erase(t.find(s[i]),1);
		}
		return t[0];
	}
};

int main() {
	Solution s = Solution();
	string str = "abcd";
	string t = "abcde";

	char a = s.findTheDifference(str, t);

	return 0;
}