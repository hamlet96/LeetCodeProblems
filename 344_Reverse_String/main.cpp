#include <vector>
using namespace std;

class Solution {
private:
	int m;
	void recRev(vector<char>& s, int n) {
		if (n >= m / 2)return;
		swap(s[n], s[m - n - 1]);
		recRev(s, n + 1);
	}
public:
	void reverseString(vector<char>& s) {
		m = s.size();
		recRev(s,0);
	}
};

int main() {
	Solution s = Solution();
	vector<char> v;
	//v.push_back('A');
	//v.push_back('B');
	//v.push_back('C');
	//v.push_back('D');
	s.reverseString(v);
	return 0;
}