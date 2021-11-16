//https://leetcode.com/problems/height-checker/

int heightChecker(vector<int>& heights) {
        // to keep count of number of misplaced students
        int cnt = 0;
        // keep a copy and sort the heights array
        vector<int> copy = heights;
        sort(copy.begin(), copy.end());
        // iterate thriugh the array and keep count
        for(int i=0; i<heights.size(); i++){
            if(copy[i] != heights[i]){
                cnt++;
            }
        }
        return cnt;
    }