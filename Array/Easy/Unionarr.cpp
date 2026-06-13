#include <bits/stdc++.h>
using namespace std;
// Union of two sorted array
// This is brute force appraoach and Time compl is O(n1 log n + n2 log n) + O(n1 + n2) and space compl is O(n1+ n2);

class Union
{
public:
    void Unqiue(vector<int> &nums1, vector<int> &nums2, int a, int b)
    {
        set<int> st;
        for (int i = 0; i < a; i++)
        {
            st.insert(nums1[i]);
        }
        for (int i = 0; i < b; i++)
        {
            st.insert(nums2[i]);
        }
        vector<int> temp;
        for (auto it : st)
        {
            temp.push_back(it);
        }

        cout << "Union of arrays: ";
        for (auto x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};

// This is optimal approach and time compl is O(n) and space compl is O(n+m);

class Solution
{
public:
    // Function to find union of two sorted arrays using two pointers
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // Vector to store union elements
        vector<int> Union;

        // Initialize two pointers for both arrays
        int i = 0, j = 0;

        // Loop until either pointer reaches the end
        while (i < n && j < m)
        {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j])
            {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++; // Move pointer in arr1
            }
            // If current element in arr2 is smaller
            else if (arr2[j] < arr1[i])
            {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++; // Move pointer in arr2
            }
            else
            {
                // Elements are equal, add once if not duplicate
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;
                j++; // Move both pointers
            }
        }

        // Append remaining elements from arr1
        while (i < n)
        {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        // Append remaining elements from arr2
        while (j < m)
        {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

        // Return the final union vector
        return Union;
    }
};

// Intersection of two sorted array And time compl is O(n+m) , space comp is O(min(n,m)) 

class Solution
{
public:
    vector<int> findarrayintersection(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        int m = arr2.size();
        int i = 0, j = 0;
        vector<int> ans;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr2[j] < arr1[i])
            {
                j++;
            }
            else
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};

    Solution obj;
    vector<int> result = obj.findarrayintersection(arr1, arr2);
    cout << "Intersection: ";
    cout << "Union of arr1 and arr2 is: ";
    for (auto val : result)
        cout << val << " ";
    return 0;
}
