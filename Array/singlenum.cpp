#include <bits/stdc++.h>
using namespace std;
// time compl is O(nsrq) and space compl is O(1)
int single(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }

        if (count == 1)
        {
            return num;
        }
    }

    return -1;
}

// Using hasing --> unordered_map the time comp is O(N) and space comp is O(N)
int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    unordered_map<int, int> mp;

    for (int x : nums)
    {
        mp[x]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

// Using XOR --> time compl is O(N) and space compl is O(1);
int singlenum(vector<int> &nums)
{
    int ans = 0;
    for (auto it : nums)
    {
        ans = ans ^ it;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 1, 3, 3, 4, 4};
    int ans = singlenum(nums);
    cout << "Single number : " << ans << endl;

    return 0;
}