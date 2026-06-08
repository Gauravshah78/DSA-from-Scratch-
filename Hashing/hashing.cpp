#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void f()
    {
        int n;
        cout << "Enter array size : ";
        cin >> n;
        int arr[n];
        cout << "Enter array element : ";
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        // precompute
        int hashh[13] = {0};
        for (int i = 0; i < n; i++)
        {
            hashh[arr[i]] += 1;
        }
        int q;
        cout << "Enter how much element do you search : ";
        cin >> q;
        cout << "Enter check elements in given array :";
        while (q--)
        {
            int num;
            cin >> num;
            cout << hashh[num] << endl;
        }
    }
};
class solutions
{
public:
    void f1()
    {
        int n;
        cout << "Enter a array sizze :";
        cin >> n;
        int arr[n];
        cout << "Enter array element : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }
        // for (auto it : mpp)
        //   cout << it.first << " -> " << it.second << endl;

        int q;
        cout << "Enter search check element size : ";
        cin >> q;
        cout << "Enter check element :";
        while (q--)
        {
            int num;
            cin >> num;
            cout << mpp[num] << endl;
        }
    }
};
class so
{
public:
    void fun()
    {
        string s;
        cout << "Enter string :";
        cin >> s;
        int hashh[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            hashh[s[i]]++;
        }
        // for (auto it : mpp)
        //   cout << it.first << " -> " << it.second << endl;

        int q;
        cout << "Enter search check element size : ";
        cin >> q;
        cout << "Enter check element :";
        while (q--)
        {
            char c;
            cin >> c;
            cout << hashh[c] << endl;
        }
    }
};
class one
{
public:
    void fun()
    {
        string s;
        cout << "Enter string :";
        cin >> s;

        map<int, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        for (auto it : mpp)
            cout << it.first << " -> " << it.second << endl;

        int q;
        cout << "Enter search check element size : ";
        cin >> q;
        cout << "Enter check element :";
        while (q--)
        {
            char c;
            cin >> c;
            cout << mpp[c] << endl;
        }
    }
};

class two
{
public:
    void freq(int n, int arr[])
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
            mpp[arr[i]]++;

        int maxfreq = 0, minfreq = n;
        int maxele = 0, minele = 0;

        for (auto it : mpp)
        {
            int element = it.first;
            int count = it.second;

            if (count > maxfreq)
            {
                maxfreq = count;
                maxele = element;
            }
            if (count < minfreq)
            {
                minfreq = count;
                minele = element;
            }
        }
        cout << "highest freq count is :" << maxele << endl;
        cout << "Lowest freq count is :" << minele << endl;
    }
};
int main()
{
    two play;
    int arr[] = {2,2,3,4,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    play.freq(n, arr);
    return 0;
}