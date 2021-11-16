//https://leetcode.com/problems/squares-of-a-sorted-array/

int square(int n){
        return n*n;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted;
        int first = 0;
        int last = nums.size()-1;
        while(first <= last){
            int s = square(nums[first]);
            int l = square(nums[last]);
            if(l > s){
                sorted.push_back(l);
                last--;
            }
            else{
                sorted.push_back(s);
                first++;
            }
        }
        reverse(sorted.begin(), sorted.end());
        return sorted;
    }
