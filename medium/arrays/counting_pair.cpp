// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


int getPairsCount(int arr[], int n, int k) {
        // code here
        int cnt = 0,sum = 0;
        map<int,int> m;
        //iterate and insert frequencies of elements found to map
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        //
        for(int i=0;i<n;i++){
            //store the occurence of the sum-arr[i] elements to a variable
            sum += m[k - arr[i]];
            //if the k-arr[i] element == arr[i], decrement sum
            if(k-arr[i] == arr[i]){
                sum--;
            }
        }
        return sum/2;
    }