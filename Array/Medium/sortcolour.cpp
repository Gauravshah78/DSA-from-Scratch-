#include <bits/stdc++.h>
using namespace std;
// Brute force approach
// Time comp is O(nlogn) and Space comp is O(N)
void sortColors(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

// Better solution
// Time comp is O(n) and space comp is O(1)

void sort_Colors(vector<int> &nums)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            cnt0++;
        else if (nums[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    for (int i = 0; i < cnt0; i++)
        nums[i] = 0;
    for (int i = cnt0; i < cnt0 + cnt1; i++)
        nums[i] = 1;
    for (int i = cnt0 + cnt1; i < nums.size(); i++)
        nums[i] = 2;
}

// Optimal solution
// Time comp is O(N) and space O(1)

void sort(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {0, 1, 1, 2, 0, 2, 1, 2, 1, 0};
    sort(nums);
    cout << "Sorted numbers: ";
    for (int x : nums)
    {
        cout << x << " ";
    }
    return 0;
}