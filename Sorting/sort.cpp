#include <bits/stdc++.h>
using namespace std;
// Selection sorting
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        // swap(mini,i);
    }
}

// Bubble sorting
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                // swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
        cout << "Runs" << endl;
    }
}

// Insert sorting
void insert_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
        cout << "runs\n";
    }
}

// Merge sorting
class Solution
{
public:
    void ms(vector<int> &arr, int low, int mid, int high)
    {
        // create temp array
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        // copy remaing element from left hand
        while (left <= mid)
            temp.push_back(arr[left++]);
        // copy remaing element from right hand
        temp.push_back(arr[right++]);

        // copy sorted element back to original array
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
    // Recursive merge sort function
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;

        // Find the middle index
        int mid = (low + high) / 2;

        // Recursively sort left half
        mergeSort(arr, low, mid);

        // Recursively sort right half
        mergeSort(arr, mid + 1, high);

        // Merge the two sorted halves
        ms(arr, low, mid, high);
    }
};

// quick sorting
class solution
{
public:
    int partition(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while (i < j)
        {
            while (arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(arr, low, high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }
};
int main()
{
    int n;
    cout << "Enter size of an array :";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter element : ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    solution obj;
    obj.qs(arr, 0, n - 1);
    
    cout << "Sorted array : ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    
    return 0;
}