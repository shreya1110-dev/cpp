// https://leetcode.com/problems/search-insert-position/

int searchInsert(vector<int>& nums, int target) {
        //check for first element or less than first element
        if(target == nums[0] || target<nums[0]){
            return 0;
        }
        //check if its the last element
        if(target == nums[nums.size()-1] ){
            return nums.size()-1;
        }
        //check if greater than last element
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        for(int i=0;i<nums.size()-1;i++){
            //check if target is in array
            if(target==nums[i]){
                return i;
            }
            //check if in between this and next element
            else if((target>nums[i] && target<nums[i+1])){
                return i+1;
            }
        }
        return 0;
    }
