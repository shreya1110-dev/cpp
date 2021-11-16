// https://leetcode.com/problems/climbing-stairs/

int climbStairs(int n) {
        // create a memoisation array of length n+1
        vector<int> arr(n+1);
        // if n=0 or 1 or 2 return n
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        // store n[1] = 1 and n[2] = 2
        arr[1] = 1;
        arr[2] = 2;
        // add arr[n-1] + arr[n-2] after 3
        for(int i=3;i<=n;i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
