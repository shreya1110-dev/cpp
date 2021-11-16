// merge sorted arrays without extra space

//finding next gap
    int nextGap(int gap){
        if(gap <= 1){
            return 0;
        }
        else{
            return gap/2 + gap%2;
        }
    }
    
	void merge(int arr1[], int arr2[], int n, int m) {
	    //initial gap is m+n
	    int gap = (m+n);
	    int j,i;
	    //if first array size is lesser than gap
	    if(gap > n){
	        j = gap - n;
	    }
	    else{
	        j = 0;
	    }
	    //iterate as long as gap>=1
	    for(gap = nextGap(gap); gap > 0;gap = nextGap(gap)){
	        //for swaps in first array
	        for(i=0; i+gap < n; i++){
	            if(arr1[i] > arr1[i+gap]){
	                swap(arr1[i], arr1[i+gap]);
	            }
	        }
	        //for swaps in first and second array
	       for(j = gap>n ? gap-n : 0;i<n && j<m;i++,j++){
	           if(arr1[i] > arr2[j]){
	               swap(arr1[i], arr2[j]);
	           }
	       }
	       //for swaps in second array
	       if(j < m){
        	   for(j=0; j+gap < m;j++){
        	       if(arr2[j] > arr2[j+gap]){
        	           swap(arr2[j], arr2[j+gap]);
        	       }
        	   }
	       }
	   }
	}