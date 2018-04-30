#include <vector>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> elements;
		for (int i = 0; i < nums1.size(); i++) {
			auto it = find(nums2.begin(), nums2.end(), nums1[i]);
			if (it != nums2.end()) {
				elements.push_back(*it);
				nums2.erase(it);
			}
		}
		return elements;
	}
};

int main() {
	Solution s = Solution();

	vector<int> matrix2{ 1,2,2,1 };
	vector<int> matrix1{ 2 };

	vector<int> res = s.intersect(matrix1, matrix2);

	return 0;
}