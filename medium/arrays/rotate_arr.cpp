 // https://leetcode.com/problems/rotate-array/

 void rotate(vector<int>& nums, int k) {
        
        //k is the point after which changes happen in the array
        k = nums.size() - k%nums.size();
        
        //reverse first half, from beginning till k
        reverse(nums.begin(), nums.begin()+k);
        
        //reverse second half, after k to end
        reverse(nums.begin()+k, nums.end());
        
        //reverse the entire array
        reverse(nums.begin(),nums.end());
    }