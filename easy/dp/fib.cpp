// fibonacci series bottoms up

int fib(int n) {
        vector<int> f(n+1);
        //if number is 0 or 1 return n
        if(n==0 || n==1){
            return n;
        }
        //initialise 0 and 1 as first anb second elements
        f[0] = 0;
        f[1] = 1;
        //apply to all other elements of the array
        for(int i=2;i<=n;i++){
            //fib formula
            f[i] = f[i-1]+f[i-2];
        }
        //return f[n]
        return f[n];
    }
