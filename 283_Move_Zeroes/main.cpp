#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		for (int i = 0,lastZero = 0; i<nums.size(); i++)
		{
			if (nums[i] != 0)
			{
				swap(nums[i], nums[lastZero++]);
			}
		}
		int b =5;
		b++;
	}
};

int main() {
	Solution s = Solution();

	vector<int> matrix{ 0, 1, 0, 3, 12 };

	s.moveZeroes(matrix);

	return 0;
}