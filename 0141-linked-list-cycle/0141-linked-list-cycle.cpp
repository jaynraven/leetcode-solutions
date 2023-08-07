/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> sets;
        while (true)
        {
            if (head == NULL)
                return false;
            if (sets.count(head))
                return true;
            else
                sets.insert(head);
            head = head->next;
        }
        return false;
    }
};