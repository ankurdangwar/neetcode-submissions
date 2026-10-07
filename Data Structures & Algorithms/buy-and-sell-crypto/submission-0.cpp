class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            profit=prices[i]-min;
            maxProfit=max(profit,maxProfit);
            if(prices[i]<min){
                min=prices[i];
            }
        }
        return maxProfit;
    }
};
