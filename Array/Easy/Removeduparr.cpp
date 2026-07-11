#include <bits/stdc++.h>
using namespace std;
// Remove duplicate from sorted array
// this is my brute force appoarch and Time comp is O(NlogN + N) , Space compl is O(N);
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int index = 0;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        for (auto it : st)
        {
            nums[index] = it;
            index++;
        }
        return index;
    }
};

// This is optimal approach , Time compl is O(N), Space compl is O(1);
class Duplicate
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;

        for (int j = 1; j < n; j++)
        {
            if (nums[j] != nums[i])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return (i + 1);
    }
};
int main()
{
    int n;
    cout << "Enter size of an array :";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter element : ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Duplicate sol;
    int k = sol.removeDuplicates(nums);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}