// finding single duplciate elemenr in a list of elements from 0-n-1

int findDuplicate(vector<int>& nums) {
        //initialise a slow and fast pointer at 0th element
        long int slow = nums[0],fast = nums[0];
        do{
            //move slow by 1
            slow = nums[slow];
            //move fast by 2
            fast = nums[nums[fast]];
        }while(slow!=fast);
        
        //after 1st collision, keep fast at 0
        fast = nums[0];
        
        //next collision
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }