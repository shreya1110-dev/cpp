// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        
        //use 2 pointer approach since array is sorted
        int start = 0;
        int end = numbers.size() - 1;
        
        // iterate as long as start is not equal to end
        while(start < end){
            
            //if start+end is target return start and end and push to res and break
            if(numbers[start] + numbers[end] == target){
                res.push_back(start+1);
                res.push_back(end+1);
                break;
            }
            
            //if start+end is less than target, then increment start
            else if(numbers[start] + numbers[end] < target){
                start++;
            }
            
            //else start_end is greater than target then decrement end
            else if(numbers[start] + numbers[end] > target){
                end--;
            }
        }
        return res;
    }
