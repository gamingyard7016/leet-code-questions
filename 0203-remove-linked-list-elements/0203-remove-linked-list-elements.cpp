
class Solution {//change kar ke dale hai
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next; // skip node
            } else {
                curr = curr->next;
            }
        }
        return dummy->next;//dfwfedfgfdjkhgkngf
    }
};