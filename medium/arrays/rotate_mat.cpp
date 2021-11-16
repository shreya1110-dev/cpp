// rotate a matrix clockwise

void rotate(vector<vector<int>> &m){
        int n = m.size();
				//finding transpose of a matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(m[i][j], m[j][i]);
            }
        }
        //reversing all rows of an element
        for(int i=0;i<n;i++){
            reverse(m[i].begin(), m[i].end());
        }
    }