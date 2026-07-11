#include <bits/stdc++.h>
using namespace std;
// Brute approach
// time comp is O(nsqr) and space compl is O(1)
int findlongestsubarrlen(vector<int> &arr, int k)
{
    int n = arr.size();

    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}
// Better solution the time comp is O(nlogn) and space compl is O(n)
int longest(vector<int> &arr, long long k)
{
    map<long long, int> prefixsum;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (prefixsum.find(rem) != prefixsum.end())
        {
            int len = i - prefixsum[rem];
            maxlen = max(maxlen, len);
        }
        if (prefixsum.find(sum) == prefixsum.end())
        {
            prefixsum[sum] = i;
        }
    }
    return maxlen;
}

// Optimal solution
// Time comp is O(N) and space comp is O(1)

int longestlen(vector<int> &arr, long long k)
{
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxlen = 0;
    int n = arr.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return maxlen;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int ans = longestlen(arr, 3);
    cout << "Longest length of subarray is : " << ans << endl;
    return 0;
}