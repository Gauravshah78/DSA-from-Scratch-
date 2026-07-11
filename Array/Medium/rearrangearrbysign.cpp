#include <bits/stdc++.h>
using namespace std;

// Brute forces solution
// Time compp is O(n) and O(n)
class Array
{
public:
    vector<int> RearrangeBySign(vector<int> &A, int n)
    {
        vector<int> pos; // Vector to store positive numbers
        vector<int> neg; // Vector to store negative numbers

        // Step 1: Separate positives and negatives
        for (int i = 0; i < n; i++)
        {
            if (A[i] > 0)
                pos.push_back(A[i]); // Add positive to pos[]
            else
                neg.push_back(A[i]); // Add negative to neg[]
        }

        // Step 2: Place positives at even indices and negatives at odd indices
        for (int i = 0; i < n / 2; i++)
        {
            A[2 * i] = pos[i];     // Even index → positive
            A[2 * i + 1] = neg[i]; // Odd index → negative
        }

        return A; // Return the rearranged array
    }
};

// Optimal approach
// Time compl is O(N)and space compl is O(N)

class ArrayManipulator
{
public:
    // Function to rearrange elements by alternating sign
    vector<int> rearrangeBySign(vector<int> &A)
    {
        int n = A.size();

        // Create a result array of size n initialized with 0
        vector<int> ans(n, 0);

        // posIndex will store index for next positive number (even index)
        // negIndex will store index for next negative number (odd index)
        int posIndex = 0, negIndex = 1;

        // Loop through the original array
        for (int i = 0; i < n; i++)
        {
            if (A[i] < 0)
            {
                // Place negative numbers at odd indices
                ans[negIndex] = A[i];
                negIndex += 2;
            }
            else
            {
                // Place positive numbers at even indices
                ans[posIndex] = A[i];
                posIndex += 2;
            }
        }

        return ans;
    }
};
int main()
{

    vector<int> A{1, 2, -4, -5};

    // Create object of the class
    ArrayManipulator obj;

    // Call the function and get result
    vector<int> ans = obj.rearrangeBySign(A);

    // Print the rearranged array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}