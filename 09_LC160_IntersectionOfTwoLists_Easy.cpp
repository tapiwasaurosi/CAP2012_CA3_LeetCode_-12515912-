class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        ListNode *alpha = headA;
        ListNode *beta = headB;
        while (alpha != beta){
            alpha = alpha ? alpha->next :headB;
            beta = beta ? beta->next : headA;
        }
        return alpha;
    }
};
