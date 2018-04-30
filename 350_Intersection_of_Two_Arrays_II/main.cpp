#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> exists;
		vector<int> elements;
		for (int i = 0; i < nums1.size(); i++) {
			if (exists.emplace(pair<int, int>(nums1[i], 1)).second == false) {
				exists[nums1[i]]++;
			}
		}
		for (int i = 0; i < nums2.size(); i++) {
			if(exists[nums2[i]] > 0) {
				elements.push_back(nums2[i]);
				exists[nums2[i]]--;
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