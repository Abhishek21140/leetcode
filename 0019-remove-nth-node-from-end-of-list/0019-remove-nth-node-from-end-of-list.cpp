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
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }

    int pos = count - n; 
    if(pos == 0){
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    ListNode* curr = head;
    for(int i = 0; i < pos - 1; i++){
        curr = curr->next;
    }

    ListNode* del = curr->next;
    curr->next = del->next;
    delete del;

    return head;
}
};