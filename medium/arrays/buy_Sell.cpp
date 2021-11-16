// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
        //initialise minimum and profit
        int minm = INT_MAX;
        int profit = 0;
        
        //iterate through every element
        for(int i=0;i<prices.size();i++){
            
            //find minimum price
            if(prices[i] < minm){
                minm = prices[i];
            }
            
            //check if maximum profit can be obtained
            if(prices[i] - minm > profit){
                profit = prices[i] - minm;
            }
        }
        return profit;
    }
```