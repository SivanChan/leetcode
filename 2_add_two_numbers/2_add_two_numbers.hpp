
// Source : https://leetcode.com/problems/add-two-numbers/
// Author : Sivan


struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		bool last_need_add = false;
		int total_val = 0;
		ListNode* rlst = 0;
		ListNode* last_node = 0;

		while (l1 != NULL || l2 != NULL || last_need_add)
		{
			total_val = 0;
			if (l1 != 0)
			{
				total_val += l1->val;
				l1 = l1->next;
			}
			if (l2 != 0)
			{
				total_val += l2->val;
				l2 = l2->next;
			}	

			if (last_need_add)
			{
				total_val += 1;
			}
			if (total_val >= 10)
			{
				total_val -= 10;
				last_need_add = true;
			}
			else
			{
				last_need_add = false;
			}

			if (last_node == NULL)
			{
				rlst = new ListNode(total_val);
				last_node = rlst;
			}
			else
			{
				last_node->next = new ListNode(total_val);
				last_node = last_node->next;
			}
		}
		return rlst;
	}
};