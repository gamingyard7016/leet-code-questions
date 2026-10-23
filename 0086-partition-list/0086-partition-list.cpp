/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 4TH TIME SUBMITING SAME QUESTION
 5th time
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* d1 = new ListNode(-1);
        ListNode* d2 = new ListNode(-1);

        ListNode* a = d1;
        ListNode* b = d2;

        while(temp){
            ListNode* aage = temp->next;

            temp->next = NULL;
            if(temp->val < x) {
                a->next = temp;
                a = a->next;
            }
            else{
                b->next = temp;
                b = b->next;
            }
            temp = aage;
        }
        a->next = d2->next;
        return d1->next;
    }
};