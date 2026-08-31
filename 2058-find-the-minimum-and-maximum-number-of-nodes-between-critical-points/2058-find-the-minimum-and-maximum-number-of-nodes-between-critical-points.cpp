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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2, -1);

        if (head == NULL || head->next == NULL || head->next->next == NULL) {
            return ans;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;

        int curridx = 1;

        int first = -1;
        int last = -1;

        int minD = INT_MAX;
        int maxD = -1;

        while (next != NULL) {

            if ((prev->val < curr->val && next->val < curr->val) ||
                (prev->val > curr->val && next->val > curr->val)) {

                if (first == -1) {
                    first = curridx;
                } else {
                    minD = min(minD, curridx - last);
                    maxD = curridx - first;
                }

                last = curridx;
            }

            curridx++;
            prev = curr;
            curr = next;
            next = next->next;
        }

        if (first == -1 || first == last) {
            return ans;
        }

        ans[0] = minD;
        ans[1] = maxD;

        return ans;
    }
};