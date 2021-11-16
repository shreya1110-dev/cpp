// https://leetcode.com/problems/merge-intervals/ 

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> m;
        //sort the intervals
        sort(intervals.begin(),intervals.end());
        //iterate through all the intervals
        for(auto interval:intervals){
            //if the merged list is empty or the top element in the merged list doesnt overlap with current interval
            if(m.empty() || m[m.size()-1][1] < interval[0]){
                m.push_back(interval);
            }
            //find maximum of merged[curr][1] or interval[1]
            else{
                m[m.size()-1][1] = max(m[m.size()-1][1], interval[1]);
            }
        }
        return m;
    }
