#include <bits/stdc++.h>
using namespace std;
// Time compl is O(Nsqr) and space compl is O(1)
// Brute force approach
vector<int> twosum(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

// Better solution
// Time compl is O(nlogn) and space compl is O(N);
vector<int> two_Sum(vector<int> &nums, int target)
{

    int n = nums.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int moreneed = target - num;
        if (mp.find(moreneed) != mp.end())
        {
            return {mp[moreneed], i};
        }
        mp[num] = i;
    }
    return {-1, -1};
}

// Optimal solution
// Time comp is o(N) and space comp is O(1)
vector<int> two(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<pair<int, int>> numsWithIndex;
    for (int i = 0; i < n; i++)
    {
        numsWithIndex.push_back({nums[i], i});
    }
    sort(numsWithIndex.begin(), numsWithIndex.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = numsWithIndex[left].first + numsWithIndex[right].first;
        if (sum == target)
        {
            return {numsWithIndex[left].second,
                    numsWithIndex[right].second};
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = two(nums, 9);
    cout << "Target index found :" << ans[0] << "," << ans[1];
    return 0;
}