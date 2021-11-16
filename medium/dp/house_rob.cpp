// https://leetcode.com/problems/house-robber/

int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n+1);
        //if only 1 house, return only that cost
        if(n == 1){
            return nums[0];
        }
        
        //if 2 houses return max 
        if(n == 2){
            return max(nums[0], nums[1]);
        }
        
        //store values in array
        arr[1] = nums[0];
        arr[2] = max(nums[0], nums[1]);
        
        //store max among cost of this house+arr[i-2] and previous house alone
        for(int i=3; i<=n; i++){
            arr[i] = max(arr[i-2]+nums[i-1], arr[i-1]);
        }
        return arr[n];
    }