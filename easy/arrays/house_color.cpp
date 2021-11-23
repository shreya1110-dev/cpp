https://leetcode.com/problems/two-furthest-houses-with-different-colors/

int maxDistance(vector<int>& colors) {
        // to keep track of maximum distance
        int max = INT_MIN;
        // iterate through colors
        for(int i=0;i<colors.size();i++){
           int l = colors.size()-1;
            // move last as long as colors[first] != colors[last]
            while(colors[l] == colors[i]){
                l--;
            }
            
            // compare with max
            if(abs(l-i) > max){
                max = abs(l-i);
            }
        }
        return max;
    }