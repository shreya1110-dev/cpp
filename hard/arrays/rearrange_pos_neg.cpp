// rearrange positive and negative without extra space

void rearrange(int arr[], int n) {
	    // to store the positive and negative numbers
	    vector<int> pos;
	    vector<int> neg;
	    int p,q;
	    //iterate through array and store positive and negative numbers
	    for(int i=0;i<n;i++){
	        if(arr[i] >= 0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    //initialise the p,q,k as pos,neg,arrindex
	    p = 0;
	    q = 0;
	    int k = 0;
	    //as long as there are elements in both
	    while(p < pos.size() && q < neg.size()){
	        if(k%2 == 0){
	            arr[k++] = pos[p++];
	        }
	        else{
	            arr[k++] = neg[q++];
	        }
	    }
	    //if negative array is exhausted
	    if(p < pos.size()){
	        arr[k++] = pos[p++];
	    }
	    //if positive array is exhausted
	    if(q < neg.size()){
	        arr[k++] = neg[q++];
	    }
	}
