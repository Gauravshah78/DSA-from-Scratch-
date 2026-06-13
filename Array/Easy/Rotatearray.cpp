#include <bits/stdc++.h>
using namespace std;
// 1 Way to solve the Rotating array by k Places the time compl is O(N) and space compl is O(1);
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// 2 Ways to solve the Rotating array by one place the time compl is O(N) and space compl for extra space is O(K);
class work
{
public:
    void rotate(vector<int> &nums)
    {
        int n = nums.size();
        int temp = nums[0];
        for (int i = 1; i < n; i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[n - 1] = temp;
    }
};

// 3 Way to solve the Rotating array by one place the time compl is O(N+k) and space compl for extra space is O(K);
// Right rotate by k places
class solve
{
public:
    void rotate(vector<int> &nums, int n, int k)
    {
        k %= n;
        vector<int> temp(k);
        for (int i = 0; i < k; i++)
        {
            temp[i] = nums[n - k + i];
        }
        for (int i = n - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};

// 4 Way to solve the left rotating array by k places the time compl is O(N+K) and space compl is O(1)
class solved
{
public:
    void left_rotate(vector<int> &nums, int n, int k)
    {
        k %= n;
        vector<int> temp(k);
        for (int i = 0; i < k; i++)
        {
            temp[i] = nums[i];
        }
        for (int i = k; i < n; i++)
        {
            nums[i - k] = nums[i];
        }
        for (int i = n - k; i < n; i++)
        {
            nums[i] = temp[i - (n - k)];
        }
    }
};
int main()
{
    solved obj;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    int n = nums.size();
    int k = 3;

    obj.left_rotate(nums, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}