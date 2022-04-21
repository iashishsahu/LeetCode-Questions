class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxPro=0;
        int minPrice=prices[0];
        for(auto it: prices){
            minPrice=min(minPrice, it);
            maxPro=max(maxPro, it-minPrice);
        }
        return maxPro;
    }
};