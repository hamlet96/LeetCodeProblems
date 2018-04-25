#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	int singleNonDuplicate(vector<int>& nums) {
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it += 2)
		{
			if (*it != *(it + 1))return *it;
		}
	}
};

int main() {

	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(4);

	Solution s = Solution();
	cout << s.singleNonDuplicate(nums);

	return 0;
}