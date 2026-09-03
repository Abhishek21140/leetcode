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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        ListNode* ans = NULL;
        ListNode* curr = headA;
        unordered_set<ListNode*> s;
        while (curr) {
            s.insert(curr);
            curr = curr->next;
        }
        ListNode* curr2 = headB;
        while (curr2) {
            if (s.find(curr2)!=s.end()) {
                ans = curr2;
                break;
            }
            curr2=curr2->next;
        }
        return ans;
    }
};