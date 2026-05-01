#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 2)
                duplicate = i;
            if (freq[i] == 0)
                missing = i;
        }

        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 2, 2, 4};

    vector<int> ans = obj.findErrorNums(nums);

    cout << ans[0] << " " << ans[1];

    return 0;
}