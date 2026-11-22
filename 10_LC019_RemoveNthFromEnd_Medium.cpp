class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* anchor = new ListNode(0, head);
        ListNode* vanguard = anchor;
        ListNode* rearguard = anchor;
        for(int step = 0; step <= n; step++){
            vanguard = vanguard->next;
        }
        while(vanguard != nullptr){
            vanguard = vanguard->next;
            rearguard = rearguard->next;
        }
        ListNode *victim =rearguard->next;
        rearguard->next = victim->next;
        delete victim;
        ListNode *result = anchor->next;
        delete anchor;
        return result;
    }
};
