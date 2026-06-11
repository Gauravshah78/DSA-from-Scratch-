#include <bits/stdc++.h>
using namespace std;

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

//Time comp is O(n)  and space comp is O(1)
int findMaxConsecutiveOnes(vector<int> &arr)
{

    int n = arr.size();
    int count = 0;
    int Maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            Maxcount = max(Maxcount, count);
        }
        else
        {
            count = 0;
        }
    }
    return Maxcount;
}
int main()
{
    vector<int> arr = {1, 1, 1, 0, 1, 1};
    int ans = findMaxConsecutiveOnes(arr);
    cout << "Max consecutive ones : " << ans;
    return 0;
}