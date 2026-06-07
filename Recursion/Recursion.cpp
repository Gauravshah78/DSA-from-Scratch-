#include <iostream>
#include <string>
#include <vector>
using namespace std;
class solution
{
public:
    void printname(string name, int cnt, int n)
    {
        if (cnt == n)
            return;
        cout << name << endl;
        printname(name, cnt + 1, n);
    }
};
void f(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    f(i + 1, arr, n);
}
bool fun(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return fun(i + 1, s);
}
class hello
{
public:
    long print(int n)
    {
        long fact = 1.0;
        for (int i = 1; i <= n; i++)
            fact *= i;
        return fact;
    }
};
class a
{
public:
    int sumtwo()
    {
        vector<int> num(2);
        cout << "Enter two number :";
        cin >> num[0] >> num[1];
        int sum = num[0] + num[1];
        return sum;
    }
    void fn(string s) {
        cout<<"hello "<<s;
    }
};
int main()
{ /*
  solution sol;
  int n = 5;
  string name = "Gaurav";

  sol.printname(name, 0, n); */
    /*
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        f(0, arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " "; */
    // string s = "DAMM";
    // cout << fun(0, s);
    /*hello obj;
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << obj.print(n);
    */
     a b;
    //cout<<"Sum is :"<<b.sumtwo();
    string s;
    cout<<"Enter your name :";
    return 0;
}