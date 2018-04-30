#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
		map<int, int> sum;
		int count = 0;
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < B.size(); j++) {
				if (sum.find(A[i] + B[j]) != sum.end()) {
					sum[A[i] + B[j]]++;
				}
				else {
					sum.insert(pair<int,int>(A[i] + B[j], 1));
				}
			}
		}
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