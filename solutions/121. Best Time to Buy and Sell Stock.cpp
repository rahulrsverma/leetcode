class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n = prices.size();
        
        int maxtotal = 0;
        int profit, maxProfit = 0;
        
        for(int i = n-1; i >= 0; i--){
            maxtotal = max(maxtotal, prices[i]);
            profit = max(maxtotal - prices[i], 0);
            maxProfit = max(maxProfit, profit);
        }
        
        return maxProfit;   
    }
};
