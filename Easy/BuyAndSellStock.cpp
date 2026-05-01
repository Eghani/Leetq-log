#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices)
        {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};

int main()
{
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int ans = obj.maxProfit(prices);

    cout << ans;

    return 0;
}