// https://leetcode.com/problems/merge-sorted-array/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //initialise another vector of the same size
        vector<int> res;
        int a = 0, b = 0;
        // while both are not empty
        while(a<m && b<n){
            //if a[head] less than b[head], push a[head]
            if(nums1[a] <= nums2[b]){
                res.push_back(nums1[a]);
                a++;
            }
            //if b[head] less than a[head], push b[head]
            else if(nums2[b] < nums1[a]){
                res.push_back(nums2[b]);
                b++;
            }
        }
        //if a is left, push a
        while(a<m){
            res.push_back(nums1[a++]);
        }
        //if b is left, push b
        while(b<n){
            res.push_back(nums2[b++]);
        }
        nums1 = res;
    }