1class Solution {
2public:
3    long long maximumProfit(vector<int>& prices, int k) {
4        int n = prices.size();
5        if (n == 0 || k == 0) return 0;
6
7        vector<vector<long long>> dp(k + 1, vector<long long>(n, 0));
8
9        for (int t = 1; t <= k; t++) {
10            long long bestBuy  = -prices[0];
11            long long bestSell =  prices[0];
12
13            for (int i = 1; i < n; i++) {
14                dp[t][i] = max({
15                    dp[t][i - 1],          // skip day i
16                    bestBuy + prices[i],  // normal transaction
17                    bestSell - prices[i]  // short transaction
18                });
19
20                // must use i-1 to avoid overlap
21                bestBuy  = max(bestBuy,  dp[t - 1][i - 1] - prices[i]);
22                bestSell = max(bestSell, dp[t - 1][i - 1] + prices[i]);
23            }
24        }
25
26        return dp[k][n - 1];
27    }
28};
29