#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		stack<TreeNode*> visit;
		vector<int> values;
		if(root!=nullptr)visit.push(root);
		while (!visit.empty()) {
			TreeNode* node = visit.top();
			visit.pop();
			if (node->val != NULL)values.push_back(node->val);
			if (node->right != NULL)visit.push(node->right);
			if (node->left != NULL)visit.push(node->left);
			
		}
		return values;
	}
};

int main() {
	Solution s = Solution();
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(NULL);
	root->right = new TreeNode(2);
	root->right->right = new TreeNode(3);

	vector<int> v = s.preorderTraversal(root);

 	return 0;
}