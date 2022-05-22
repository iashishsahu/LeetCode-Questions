class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
        vector<int> cache(amount + 1, INT_MAX);

        cache[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i - coin >= 0 && cache[i - coin] != INT_MAX) {
                    cache[i] = min(cache[i], 1 + cache[i - coin]);
                }
            }
        }

        return cache[amount] == INT_MAX ? -1 : cache[amount];
    }
};