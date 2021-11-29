//https://leetcode.com/problems/single-number/

int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            
            // performing xor of all elements in the array
            res = res^nums[i];
        }
        return res;
    }