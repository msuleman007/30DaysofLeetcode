class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int priceMin = INT_MAX;
        int profitMax = 0;

        for (int i = 0; i< prices.size();i++){
            priceMin = min(priceMin,prices[i]);
            profitMax = max(profitMax,prices[i]-priceMin); 
        }
        return profitMax;
    }
};