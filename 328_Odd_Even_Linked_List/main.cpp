#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL)return NULL;
		ListNode* odd = new ListNode(head->val);
		ListNode* ret = odd;
		if (head->next == NULL)return odd;
		ListNode* even = new ListNode(head->next->val);
		ListNode* firstEven = even;
		
		bool check = true;
		ListNode* cur = head->next->next;
		
		while (cur != NULL) {
			if (check) {
				odd->next = new ListNode(cur->val);
				odd = odd->next;
			}
			else {
				even->next = new ListNode(cur->val);
				even = even->next;
			}
			check = !check;
			cur = cur->next;
		}	
		odd->next = firstEven;
		return ret;
	}
};

int main() {
	Solution s = Solution();
	//1->2->3->4->5->NULL
	ListNode* res = new ListNode(1);
	res->next = new ListNode(2);
	res->next->next = new ListNode(3);
	res->next->next->next = new ListNode(4);
	res->next->next->next->next = new ListNode(5);
	ListNode* a = s.oddEvenList(res);

	return 0;
}