#include <bits/stdc++.h>
using namespace std;
int sorted(vector<int> &arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
        {
            count++;
        }
    }
    return count <= 1;
}
int main()
{
    vector<int> arr = {9,3,8,2,5,6};
    int n = arr.size();
    cout << "Array is sorted : " << sorted(arr, n);
    return 0;
}