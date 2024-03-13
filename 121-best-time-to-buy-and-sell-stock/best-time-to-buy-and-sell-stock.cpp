class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int priceMin = prices[0];
        int profitMax = 0;

        for (int i = 0; i< prices.size();i++){
            profitMax = max(profitMax,prices[i]-priceMin); 
            priceMin = min(priceMin,prices[i]);
        }
        return profitMax;
    }
};
