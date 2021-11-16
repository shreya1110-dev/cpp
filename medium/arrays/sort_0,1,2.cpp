void sort012(int arr[], int n)
    {
        int high,low,mid;
        //initialise low and mid to 0
        low = mid = 0;
        high = n-1;
        //iterate till end of the array
        while(mid <= high){
            
            //swap 0 with lowest index and increment lowest and mid
            if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            
            //increment mid
            else if(arr[mid] == 1){
                mid++;
            }
            
            //swap with high and decrement high
            else if(arr[mid] == 2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
    
};