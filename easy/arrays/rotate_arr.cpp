//cyclically rotate an array

void rotate(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    while(left < right){
        swap(arr[left++], arr[right]);
    }
}