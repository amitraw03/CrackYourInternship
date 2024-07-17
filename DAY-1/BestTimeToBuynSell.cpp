#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxi_profit=0;
         int mini_buy=prices[0]; //initially assume 0th is the cheapest day to buy
         for(int i=1; i<prices.size() ; i++){
            int cost=prices[i]-mini_buy;  //cost defines the best profit for us

            maxi_profit=max(maxi_profit,cost);

            mini_buy=min(mini_buy,prices[i]); //update the mini_buy accordingly for respective ith day stock price
         }
         return maxi_profit;
    }
};