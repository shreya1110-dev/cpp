//https://leetcode.com/problems/move-zeroes/

void moveZeroes(vector<int>& nums) {
        //start has the position of numbers
        int start = 0;
        
        //original size of the array
        int n = nums.size();
        
        //if nums[i] is 0, continue
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                continue;
            }
            
            //else swap with start and increment
            nums[start++] = nums[i];
        }
        //fill the rest of the elements with 0s
        for(int i=start;i<n;i++){
            nums[i] = 0;
        }
    }
