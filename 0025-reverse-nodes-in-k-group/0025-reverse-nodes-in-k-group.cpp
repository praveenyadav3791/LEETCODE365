class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* temp = head;
      int count = 0;
       while(temp){
        count++;
        temp = temp ->next;

       }
       ListNode dummy(0);
       dummy.next = head;
       ListNode* prevGroup = &dummy;
       ListNode* curr = head;

       while(count >= k){
        curr = prevGroup ->next;
        ListNode * nextNode = curr->next;
        for(int i = 1; i < k ;i++){
            curr->next = nextNode ->next;
            nextNode->next = prevGroup ->next;
            prevGroup -> next = nextNode;
            nextNode = curr ->next;
        }
        prevGroup = curr;
        count -= k;

       }
       return dummy.next;  
    }
};