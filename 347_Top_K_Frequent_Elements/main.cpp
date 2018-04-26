#include <vector>
#include <algorithm>

using namespace std;

class Solution {

	
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		vector<int> count;
		vector<int> answer;
		int uniqueCounter = 0;
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size(); i++) {
			int j = i;
			int c = 0;

			while (nums[j] == nums[i]) {
				c++;
				if(j==nums.size()-1)break;
				j++;
			}
			auto it = find(nums.begin(), nums.end(), nums[i]);
			if(c>1)nums.erase(it, it+c-1);
			nums.shrink_to_fit();
			count.push_back(c);

		}
		vector<int> g = count;
		sort(g.begin(), g.end());

		int f = g.size() - 1;
			while (k)
			{
				auto it = find(count.begin(), count.end(), g[f]);
				auto index = distance(count.begin(), it);
				count[index] = 0;
				answer.push_back(nums[index]);
				k--;
				f--;
			}
		return answer;
	}
};

int main() {
	
	
	//vector<int> matrix { 1,1,1,2,2,3 };
	vector<int> matrix{ 1,2 };

	Solution s = Solution();
	s.topKFrequent(matrix,2);

	return 0;
}