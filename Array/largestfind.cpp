#include <bits/stdc++.h>
using namespace std;
// Find a largest element in a array

int largestelement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    vector<int> arr = {34, 56, 23, 89, 4, 0, 46, 42, 56};
    int n = arr.size();
    cout << "Second Largest element of the array is : " <<largestelement(arr, n) << endl;
    return 0;
}