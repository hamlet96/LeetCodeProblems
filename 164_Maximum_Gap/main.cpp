#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maximumGap(vector<int>& nums) {
		if (nums.size() < 2) return 0;
		sort(nums.begin(), nums.end());
		int maxDif = 0;

		for (vector<int>::iterator it = nums.begin(); it != nums.end()-1; it++) {
			if ((*(it + 1) - *(it)) > maxDif)maxDif = *(it + 1) - *(it);
		}
		return maxDif;
	}
};

int main() {

	vector<int> matrix { 3,9,6,1 };

	Solution s = Solution();
	s.maximumGap(matrix);

	return 0;
}