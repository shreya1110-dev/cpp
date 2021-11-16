// https://leetcode.com/problems/delete-and-earn/

int deleteAndEarn(vector<int>& nums) {
        
        //length of the array given
        int n = nums.size();
        
        //if no element, return 0
        if(n == 0){
            return 0;
        }
        
        //if only 1 return that as sum
        if(n == 1){
            return nums[0];
        }
        
        //sort the array
        sort(nums.begin(),nums.end());
        
        //create a frequency map and store values
        map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        //take frequency of 1 as maximum value
        int maxm = freq[1];
        
        //from 2 to largest element in array
        for(int i=2;i<=nums[n-1];i++){
            
            //take the current element and add to freq(i-2) or avoid and take frequency of i-1
            freq[i] = max(freq[i]*i+freq[i-2], freq[i-1]);
            //keep track of maxm and freq[i]
            maxm = max(maxm, freq[i]);
        }
        return maxm;
    }