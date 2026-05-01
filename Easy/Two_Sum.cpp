#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end())
            {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> ans = obj.twoSum(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}