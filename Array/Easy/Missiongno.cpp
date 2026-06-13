#include <bits/stdc++.h>
using namespace std;

// Find the missiong number in given array
// This is my brute force approach the time comp is O(nsqr) and Space comp is O(1);
int missing(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i <= n; i++)
    {
        bool find = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                find = true;
                break;
            }
        }
        if (!find)
        {
            return i;
        }
    }
    return -1; // saftey
}

// This is better approach to solve missing find The time com is O(N) +O(N) = O(N) and Space com is O(N)
// Using hasing
int miss(vector<int> &arr)
{
    int n = arr.size();
    int hashh[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hashh[i] == 0)
        {
            return i;
        }
    }
    return -1; // saftey
}

// This is Optimal approach to solve this, the time comp is O() and Space comp is O(1);
// The 2 way i have solve this 1.sum 2.XOR
// Sum concept and time comp is O(N) and space comp is O(1)
int missed(vector<int> &arr)
{
    int n = arr.size() + 1;
    int sum = n * (n + 1) / 2;
    int sums = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sums += arr[i];
    }
    return sum - sums;
}

// XOR and time comp is O(2N) and space com is O(1)
int miss_num(vector<int> &arr)
{
    int n = arr.size() + 1;
    int xor1 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }
    int xor2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    return xor1 ^ xor2;
}
// THIS XOR IS BETTER AND TIME COM IS O(N) AND SPACE COM IS O(1);
int missing_num(vector<int> &arr)
{
    int n = arr.size() + 1;
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ arr[i];
    }
    xor1 ^=n;
    return xor1 ^ xor2;
}
int main()
{
    vector<int> arr = {8, 6, 5, 2, 3, 4, 1};
    int ans = missing_num(arr);
    cout << "Missing find : " << ans << endl;
    return 0;
}