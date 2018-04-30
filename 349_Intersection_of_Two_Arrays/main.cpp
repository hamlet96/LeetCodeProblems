#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		map<int, bool> exists;
		vector<int> elements;
		for (int i = 0; i < nums1.size(); i++) {
			exists[nums1[i]] = true;
		}
		for (int i = 0; i < nums2.size(); i++) {
			if (exists[nums2[i]] == true) {
				exists[nums2[i]] = false;
				elements.push_back(nums2[i]);
			}
		}
		return elements;
	}
};

int main() {
	Solution s = Solution();

	vector<int> matrix2{ 1,2,2,1 };
	vector<int> matrix1{ 2,2};
	
	vector<int> res = s.intersection(matrix1, matrix2);

	return 0;
}