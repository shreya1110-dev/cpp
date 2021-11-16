// create number line (neg on left and pos on right)
void rearrange(vector<int> &arr,int n
//2 pointer approach
int low = 0;
int high = n-1;
// iterate as long as low is not high
while(low < high){

    //element in low is already in place, increment low
    if(arr[low]<0 && arr[high]<0){
        low++;
    }

    //element in high is already in place. decrement high
    if(arr[low]>0 && arr[high]>0){
        high--;
    }

    //element in low and high isnt in place, swap
    if(arr[low]>0 && arr[high]<0){
        swap(arr[low++],arr[high--]);
    }

    //both elements are in place
    if(arr[low]<0 && arr[high]>0){
        low++;
        high--;
    }
}
