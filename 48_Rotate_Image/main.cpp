#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	int n = 0;
	vector<int> points(vector<int> a) {
		vector<int> b;
		b.push_back(a[1]);
		b.push_back(n - a[0]-1);
		return b;
	}
	void rotate(vector<vector<int>>& matrix) {
		n = matrix.size();

		for (int i = 0; i < n / 2; i++)
		{
			for (int j = i; j < n-i-1; j++)
			{
				vector<int> c1;
				c1.push_back(i);
				c1.push_back(j);
				
				int remember = matrix[i][j];

				vector<int> c = points(c1);
				while (c!=c1)
				{
					swap(matrix[c[0]][c[1]],remember);
					c = points(c);
				}
				matrix[c[0]][c[1]] = remember;
			}
		}
	}
};

int main() {

	vector<vector<int> > matrix{ { 1, 2, 3 },	{ 4, 5, 6 },{ 7, 8, 9 } };
	//vector<vector<int> > matrix{ { 5, 1, 9,11 },{ 2, 4, 8,10 },{ 13, 3, 6, 7 },{ 15,14,12,16} };
	//vector<vector<int> > matrix{ {1, 2},{3,4} };

	Solution s = Solution();
	s.rotate(matrix);

	return 0;
}