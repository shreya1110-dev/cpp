// kadanes algorithm (maximum subarray sum)

int maxSubarraySum(int arr[], int n){
        //initialise sum and max
        int sum=0,max=INT_MIN;
        
        //iterate through element
        for(int i=0;i<n;i++){
            //increment sum
            sum += arr[i];
            //if sum is maximum update it
            if(sum > max){
                max = sum;
            }
            //0 is greater than negative sum
            if(sum < 0){
                sum = 0;
            }
        }
        return max;
    }