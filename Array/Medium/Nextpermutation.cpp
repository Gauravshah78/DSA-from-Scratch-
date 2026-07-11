#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(N!*N), since we are generating all possible permutations, it takes N! time.
// Space Complexity: O(N!), storing all permutations.
// Brute force solution
class Solution
{
public:
    // Function to find the next permutation
    vector<int> nextPermutation(vector<int> &nums)
    {
        // Store all permutations
        vector<vector<int>> all;

        // Generate all permutations
        sort(nums.begin(), nums.end());
        do
        {
            all.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        // Traverse the list to find current permutation
        for (int i = 0; i < all.size(); i++)
        {
            if (all[i] == nums)
            {
                // If it's the last permutation
                if (i == all.size() - 1)
                    return all[0];
                // Return the next one
                return all[i + 1];
            }
        }

        // Return original if not found (shouldn't happen)
        return nums;
    }
};

// Time Complexity: O(N), we find the breaking point and reverse the subarray in linear time.
// Space Complexity: O(1), constant additional space is used.
// Optimal solution
class solution
{
public:
    // Function to find next permutation
    void nextPermutation(vector<int> &nums)
    {
        // Set index to -1
        int index = -1;

        // Find the first decreasing element from end
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            // If a smaller element found
            if (nums[i] < nums[i + 1])
            {
                // Store index
                index = i;
                break;
            }
        }

        // If no such index found
        if (index == -1)
        {
            // Reverse the entire array
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element just greater than nums[index]
        for (int i = nums.size() - 1; i > index; i--)
        {
            // Swap the two
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the part after index
        reverse(nums.begin() + index + 1, nums.end());
    }
};

int main()
{
    // Input array
    vector<int> nums = {1, 2, 3};

    // Create object
    solution sol;

    // Call the function
    sol.nextPermutation(nums);

    // Print result
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}