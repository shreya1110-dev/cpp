//union of 2 sorted arrays

int doUnion(int a[], int n, int b[], int m)  {
        if(n == 0){
            return m;
        }
        if(m == 0){
            return n;
        }
        int i,j;
        set<int> s;
        for(i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(j=0;j<m;j++){
            s.insert(b[j]);
        }
        return s.size();
    }