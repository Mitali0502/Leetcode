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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Create a dummy node to start the merged list
        ListNode dummy(0);
        ListNode* tail = &dummy;
        
        // While both lists are not empty, compare the heads of the two lists
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        
        // Append the remaining nodes of the non-empty list to the merged list
        if (l1 != NULL) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }
        
        // Return the head of the merged list (excluding the dummy node)
        return dummy.next;
    }
};
