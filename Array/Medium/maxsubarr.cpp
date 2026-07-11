#include <bits/stdc++.h>
using namespace std;

// Brute forces approach
// Time comp is O(N sqr) and Space comp is O(1)
int maxsubarr(vector<int> &nums)
{
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += nums[k];
                maxi = max(sum, maxi);
            }
        }
    }
    return maxi;
}

// Better Solution
// Time comp is o(Nsqr) and Space comp is O(1)
int max_subarr(vector<int> &nums)
{
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

// Optimal solution
// Time compl is O(n) and space compl is O(1)

long long maxSub_Array(vector<int> &nums)
{
    long long maxi = LONG_MIN;
    long long sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

// follow up
// Time comp is O(n) and space comp is O(1)
long long max_Sub_Arr(vector<int> &nums)
{
    long long maxi = LONG_MIN;
    long long sum = 0;
    int start = 0;
    int ansstrt = -1, ansend = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansstrt = start;
            ansend = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = max_subarr(nums);
    cout << "Maxium subarray sum : " << ans;
    return 0;
}