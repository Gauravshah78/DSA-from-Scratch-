#include <bits/stdc++.h>
using namespace std;

//Dynaming programing
//time comp is O(n) and space comp is O(1)
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0, bestBuy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {

        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(prices);
    cout << "Total Profit :" << ans;
    return 0;
}