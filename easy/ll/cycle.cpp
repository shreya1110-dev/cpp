//https://leetcode.com/problems/linked-list-cycle/

bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        // slow and fast should exist
        while(slow && fast && fast->next){
            // move slow by 1 position and fast by 2 positions
            slow = slow->next;
            fast = fast->next->next;
            
            // return true if a loop is found
            if(slow == fast){
                return true;
            }  
        }
        return false;
    }