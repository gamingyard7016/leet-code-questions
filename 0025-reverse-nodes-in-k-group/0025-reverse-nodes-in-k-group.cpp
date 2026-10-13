/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    // Helper: groupPrev se k kadam aage chal ke "kth" node return karta hai.
    // Agar beech mein null mil gaya (k nodes hain hi nahi) to nullptr.
    ListNode* getKth(ListNode* curr, int k) {
        while (curr && k > 0) {   // jab tak node hai aur kadam bache hain
            curr = curr->next;    // ek kadam aage
            k--;                  // ek kadam kam
        }
        return curr;              // k kadam chal ke jahan pahunche (ya nullptr)
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        // Dummy node: head se pehle ka fake node, taaki pehla group bhi normal lage
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // groupPrev = jis group ko ulta karna hai, uske THEEK PEHLE wala node
        ListNode* groupPrev = dummy;

        while (true) {
            // Step 1: kth node dhundho (group ka aakhri node)
            ListNode* kth = getKth(groupPrev, k);
            if (!kth) break;      // k nodes nahi bache → kaam khatam

            // Step 2: group ke BAAD wala node save karo
            ListNode* groupNext = kth->next;

            // Step 3: group ko ulta karo (LC 206 wala trick)
            // prev ko nullptr ki jagah groupNext se start karte hain,
            // taaki ulta hone ke baad group ka pehla node seedha aage se jud jaye
            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;   // group ka pehla node

            while (curr != groupNext) {         // jab tak group khatam na ho
                ListNode* tmp = curr->next;     // aage ka rasta save karo
                curr->next = prev;              // teer ulta karo
                prev = curr;                    // prev ek kadam aage
                curr = tmp;                     // curr ek kadam aage
            }

            // Step 4: ulta group ko piche wale hisse se jodo
            ListNode* oldFirst = groupPrev->next; // ye ab group ka TAIL ban chuka hai
            groupPrev->next = kth;                // kth ab group ka naya head hai
            groupPrev = oldFirst;                 // agle round ke liye groupPrev tail pe
        }

        return dummy->next;   // dummy ke baad asli head
    }
};