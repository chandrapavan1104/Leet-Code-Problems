class Solution {
    
    vector<int> findmax(vector<int> prices){
        int l = prices.size();
        vector<int> max(l,0);
        int k = prices[l-1];
        for(int i=l-1; i>=0; i--){
            if(prices[i] > k)
                k = prices[i];
            max[i] = k;
        }
        return max;
    }

public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        vector<int> max = findmax(prices);
        for(int i=0; i<prices.size(); i++){
            if(max[i]-prices[i] > profit)
                profit = max[i]-prices[i];
        }
        return profit > 0 ? profit : 0;
    }
};