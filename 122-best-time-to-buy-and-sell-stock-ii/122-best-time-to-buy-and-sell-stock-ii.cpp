class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        vector<int> dif;
        for(int i=1; i<prices.size(); i++){
            dif.push_back(prices[i] - prices[i-1]);
        }
        for(int i=0; i<dif.size(); i++)
            if(dif[i] > 0)
                profit += dif[i];
        return profit;
    }
};