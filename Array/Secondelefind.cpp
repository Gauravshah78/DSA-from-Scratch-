#include <bits/stdc++.h>
using namespace std;
// Find a second largest element in the array
// first we think brute force approach is sort karo or second larg find karo ---> Time compl is O(2N)
int second_largest(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int secondlarg = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondlarg && arr[i] != largest)
        {
            secondlarg = arr[i];
        }
    }
    return secondlarg;
}

// this is optimze approach for find second larg array; --> Time compl is O(N)
int secondlargest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int seclargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {

            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > seclargest)
        {
            seclargest = arr[i];
        }
    }
    return seclargest;
}

int ssmallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    vector<int> arr = {34, 56, 23, 89, 4, 0, 46, 42, 56};
    int n = arr.size();
    cout << "Second Largest element of the array is : " << secondlargest(arr, n) << endl;
    cout << "Second smallest element of the array is :" << ssmallest(arr, n);
    return 0;
}