class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head ->next) return head;
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prevNode = &dummy;
    while(prevNode ->next && prevNode ->next ->next){
        ListNode*firstNode = prevNode ->next;
        ListNode* secondNode = firstNode ->next;

        firstNode ->next = secondNode ->next;
        secondNode ->next = firstNode;
        prevNode ->next = secondNode;
        prevNode = firstNode;

    }
    return dummy.next;
        
    }
};