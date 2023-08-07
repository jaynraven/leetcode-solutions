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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> sets;
        while (headA) {
            if (headA == NULL)
                break;
            sets.insert(headA);
            headA = headA->next;
        }

        while (headB) {
            if (sets.count(headB))
                return headB;
            headB = headB->next;
        }

        return NULL;  
    }
};