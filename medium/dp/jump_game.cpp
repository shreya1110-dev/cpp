// https://leetcode.com/problems/jump-game/

bool canJump(vector<int>& nums) {
        int curr = 0;
        int reach = 0;
        for(curr = 0; curr<nums.size(); curr++){
            //reachable
            if(curr + nums[curr] >= nums.size()-1){
                return true;
            }
            //not reachable/stuck
            if(curr + nums[curr] == curr && curr == reach){
                return false;
            }
            //update values
            if(curr + nums[curr] > reach){
                reach = curr + nums[curr];
            }
        } 
        return false;
    }