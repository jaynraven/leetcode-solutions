/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto current = head;
        ListNode* new_head = head;
        bool is_set_head = false;
        while(current && current->next)
        {
            if (current->next->val == current->val)
            {
                current->next = current->next->next;
            }
            else
            {
                if (!is_set_head && new_head == head)
                {
                    is_set_head = true;
                    new_head = current;
                }
                current = current->next;
            }
        }
        return new_head;
    }
};