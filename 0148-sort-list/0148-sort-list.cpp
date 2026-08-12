class Solution {
public:

    ListNode* merge(ListNode* list1,ListNode* list2){
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(list1 && list2){
            if(list1 ->val <= list2 ->val){
                tail ->next = list1;
                list1= list1->next;

            }
            else{
                tail->next = list2;
                list2 = list2 ->next;

            }
            tail = tail ->next;
        }
        if(list1)
            tail ->next = list1;
        else
            tail ->next = list2;
        
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head ->next == nullptr)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head ->next;
        while(fast != nullptr && fast ->next != nullptr){
            slow = slow->next;
            fast =fast ->next ->next;

        }
        ListNode* right = slow ->next;
        slow ->next = nullptr;

        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);
        return merge(leftSorted,rightSorted);
        
    }
};