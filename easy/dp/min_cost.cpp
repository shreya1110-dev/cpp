//https://leetcode.com/problems/min-cost-climbing-stairs/

int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> sum(n+1);
         
         // if there are 2 steps, put the minimum of 1 and 0
         if(n == 2){
             return min(cost[0],cost[1]);
         }
         
         //if 2 steps, put minimum of 0 and 1
        sum[2]= min(cost[0], cost[1]);
         
         //if 3 steps, min of 1 or 0+2
        sum[3]= min(cost[1], cost[0]+cost[2]);
         
         //previous element+cost prev or i-2th element and cost
        for(int i=4; i<=n; i++)
            sum[i] = min(sum[i-1] + cost[i-1], sum[i-2] + cost[i-2]);
        
        return sum[n];
    }