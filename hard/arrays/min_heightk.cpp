// https://www.geeksforgeeks.org/minimize-the-maximum-difference-between-the-heights/

int getMinDiff(int arr[], int n, int k) {
        //sort the array 
        sort(arr,arr+n);
        int maxe,mine;
        //find difference between extreme locations
        int res = arr[n-1] - arr[0];
        
        //iterate till the end of the sorted array
        for(int i=1;i<=n-1;i++){
            
            //if first and last element is greater than k
            if(arr[i]>=k && arr[n-1]>=k){
                //find the maximum point (last element-k) and (curr-1+k) 
                maxe = max(arr[n-1]-k,arr[i-1]+k);
                //difference between current element and first element
                mine = min(arr[0]+k,arr[i]-k);
                res = min(res,maxe-mine);
            }
        }
        return res;
    }