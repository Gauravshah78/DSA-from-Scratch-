#include <bits/stdc++.h>
using namespace std;
// Brute force approach
// Time comp is O(N sqr) and Space compl is O(1)
int majorityElement(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
        }
        if (cnt > nums.size() / 2)
        {
            return nums[i];
        }
    }
    return -1;
}
// Better soluton
// Time compl is O(n) and space compl is O(1)
int majority_Element(vector<int> &nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
// Better soluton
// Time compl is O(nlogn) and space compl is O(n)
int majority(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > nums.size() / 2)
        {
            return it.first;
        }
    }
    return -1;
}

// Optimal solution
// Time comp is O(N) and Space comp is O(1)
int major_Element(vector<int> &nums)
{
    int element;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            element = nums[i];
        }
        else if (nums[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return element;
}
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 1, 2, 2};
    int ans = majorityElement(nums);
    cout << "Majority element is :" << ans;
    return 0;
}