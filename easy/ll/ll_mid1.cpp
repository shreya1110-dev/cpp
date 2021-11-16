// middle of linked list

ListNode* middleNode(ListNode* head) {
        // initialise the vector of listnodes with head
        vector<ListNode*> newlist = {head};
        
        // while the last element has a next element
        while(newlist.back()->next != NULL){
            // push the next element to the newlist
            newlist.push_back(newlist.back()->next);
        }
        // return the middle element of the list
        return newlist[newlist.size()/2];
    }