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
    ListNode* reverseList(ListNode* head) {
        ListNode* aage = NULL;
        ListNode* bich = head;
        ListNode* piche = NULL;
        
        while(bich != NULL){
            aage = bich->next;
            bich->next = piche;
            piche = bich;
            bich = aage;
        }
        return piche;
    }
};