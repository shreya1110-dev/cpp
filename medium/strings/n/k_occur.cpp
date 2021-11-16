// Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.


int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> m;
        int x = n/k;
        //store the occurences in a map
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        //iterate through every element in the map
        int cnt = 0;
        for(element:m){
            if(element.second > x){
                cnt++;
            }
        }
        return cnt;
    }