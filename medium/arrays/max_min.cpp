// finding maximum and minimum of an array with minimum number of comparisons

void maxmin(vector<int> arr,int n,int &maximum,int &minimum){
    //initialise min and max to first element
    int maxi=arr[0],mini = arr[0];
    
    //if there is only 1 element
    if(n == 1){
        maximum = maxi;
        minimum = mini;
        return;
    }
    
    //if there are two elements then directly compare
    else if(n == 2){
        if(arr[0] < arr[1]){
            maximum = arr[1];
            minimum = arr[0];
        }
        else{
            maximum = arr[0];
            minimum = arr[1];
        }
        return;
    }
    
    //if there are odd number of elements, decrement
    int odd = (n%2 == 0) ? 0:1;
    
    if(n%2 != 0){
        n--;
    }
    
    //iterate through elements and increment pointer by 2
    for(int i=0;i<n;i=i+2){
        
        //initialise local min and max between those two elements
        if(arr[i] < arr[i+1]){
            mini = arr[i];
            maxi = arr[i+1];
        }
        if(arr[i] > arr[i+1]){
            mini = arr[i+1];
            maxi = arr[i];
        }
        
        //compare local minima and global minima
        if(mini < minimum){
            minimum = mini;
        }
        
        //compare local maxima and local maxima
        if(maxi > maximum){
            maximum = maxi;
        }
    }
    
    if(odd){
        
        //compare the last element with global maxima and minima
        if(arr[n-1] > maximum){
            maximum = arr[n-1];
        }
        if(arr[n-1] < minimum){
            minimum = arr[n-1];
        }
    }
}

