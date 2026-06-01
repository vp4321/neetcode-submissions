class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]<mini){
                mini=prices[i-1];
            }
            profit = max(profit,prices[i]-mini);
        }
        return profit;
    }
};
