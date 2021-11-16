// linked list middle node

ListNode* middleNode(ListNode* head) {
        ListNode *fast = head, *slow = head;
        // fast moves 2 steps, slow moves 1 step
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }