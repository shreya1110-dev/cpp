// https://leetcode.com/problems/two-sum/

vector<int> twoSum(vector<int>& nums, int target) {
        // initialise a map to store value of nums and its index
        unordered_map<int,int> mp;
        
        //iterate through the vector 
        for(int i=0;i<nums.size();i++){
            //if target-element is found in the map return current index and index of new
            if(mp.find(target - nums[i]) != mp.end()){
                return {i,mp[target - nums[i]]};
            }
            //append to map
            mp[nums[i]] = i;
        }
        //if target not found return empty list
        return {};
    }