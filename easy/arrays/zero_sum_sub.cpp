// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum

bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        int sum = 0;
        for(int i=0;i<n;i++){
            //iterate through elements and add to sum
            sum += arr[i];
            //if sum has become 0 or if sum is found in the array, return true
            if(sum == 0 || s.find(sum) != s.end()){
                return true;
            }
            s.insert(sum);
        }
        return false;
    }
