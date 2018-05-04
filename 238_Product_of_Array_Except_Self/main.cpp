#include <vector>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int> fromBegin(n);
		vector<int> fromEnd(n);
		fromBegin[0] = 1;
		fromEnd[0] = 1;
		for (int i = 1; i < n; i++) {
			fromBegin[i] = fromBegin[i - 1] * nums[i-1];
			fromEnd[i] = fromEnd[i - 1] * nums[n - i];
		}
		vector<int> res(n);
		for (int i = 0; i < n; i++) {
			res[i] = fromBegin[i] * fromEnd[n - i - 1];
		}
		return res;
	}
};

int main() {
	Solution s = Solution();
	vector<int> matrix{ 1,2,3,4 };
	
	vector<int> a = s.productExceptSelf(matrix);

 	return 0;
}