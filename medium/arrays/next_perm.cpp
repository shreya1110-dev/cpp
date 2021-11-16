// https://leetcode.com/problems/next-permutation/

void nextPermutation(vector<int>& arr) {
        int k,j;
        int n = arr.size();
        //iterate from end
        for(k=n-2; k>=0; k--){
            //if the previous element is smaller than current, break
            if(arr[k] < arr[k+1]){
                break;
            }
        }
        //if the array is in descending order, return reversed
        if(k<0){
            reverse(arr.begin(),arr.end());
        }
        else{
            //iterate again from the end and find the element which is just greater than ith
            for(j=n-1;j>k;j--){
                if(arr[j] > arr[k]){
                    break;
                }
            }
            //swap the 2 elements
            swap(arr[j], arr[k]);
            //reverse the rest of the array from k+1 to end
            reverse(arr.begin()+k+1, arr.end());
            
        }
    }