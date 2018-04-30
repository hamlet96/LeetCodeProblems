#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
		unordered_map<int, int> sum;
		
		for (int i = 0; i < A.size(); i++) {
			for (int j = i; j < B.size(); j++) {
				if(sum.emplace(pair<int, int>(A[i] + B[j], 1)).second==false){
					sum[A[i] + B[j]]++;
				}
			}
		}
		int count = 0;
		for (int i = 0; i < C.size(); i++) {
			for (int j = 0; j < D.size(); j++) {
				if (sum[-(C[i] + D[j])] >0) {
					count+= sum[-(C[i] + D[j])];
				}
			}
		}
		return count;
	}
};
int main() {
	Solution s = Solution();

	vector<int> A{ -1,-1 };
	vector<int> B{ -1,1 };
	vector<int> C{ -1,1 };
	vector<int> D{ 1,-1 };

	int res = s.fourSumCount(A, B, C, D);

	return 0;
}