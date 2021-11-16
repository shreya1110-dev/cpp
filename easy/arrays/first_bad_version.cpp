//https://leetcode.com/problems/first-bad-version/

int firstBadVersion(int n) {
        //apply binary search concept
        int low = 0;
        int high = n;
        //while low is less than high
        while(low<high){
            //find mid element
            int mid = low+(high-low)/2;
            //if it is a not a bad version, then bring low to mid+1
            if(isBadVersion(mid) == 0){
                low = mid+1;
            }
            //if it is a bad version shift high closer to low to find first bad version
            if(isBadVersion(mid) == 1){
                high = mid;
            }
        }
        //return the leftmost element
        return low;
    }
```