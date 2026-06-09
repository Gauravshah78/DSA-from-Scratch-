#include <bits/stdc++.h>
using namespace std;
// Move zero to end in an array
// This is Brute forces approach and the time compl is O(2N) and space compl is O(X)

class Solution
{
public:
    void moveZeroes(vector<int> &arr, int n)
    {
        vector<int> temp;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                temp.push_back(arr[i]);
        }
        int x = temp.size();
        for (int i = 0; i < x; i++)
        {
            arr[i] = temp[i];
        }
        for (int i = x; i < n; i++)
        {
            arr[i] = 0;
        }
    }
};

// This is optimal approach and time compl is O(n), Space compl is o(x);

class zero {
public:
    void moveZeroes(vector<int>& nums,int n) {
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1)
            return; // no zero found

        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
int main()
{
    zero obj;
    vector<int> arr = {2,1};
    int n = arr.size();

    obj.moveZeroes(arr, n);

    cout << "Moving zeros to end : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}