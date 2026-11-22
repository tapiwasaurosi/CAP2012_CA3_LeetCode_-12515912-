class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* turtle = head;
        ListNode* hare = head;
        while(hare != nullptr && hare->next != nullptr){
            turtle = turtle->next;
            hare = hare->next->next;
        }
        return turtle;
    }
};
