#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i; j++)
        {
            cout << num;
            num += 1;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < n; j++)
        {
            cout << num;
            num += 1;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 1; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // sapce
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // sapce
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i <= n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print11(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print14(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // star
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // space
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void print15(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // star
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print16(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print19(int n)
{
    for (int i = 0; i <= n; i++)
    {
        int star = i;
        for (int j = 0; j < i; j++)
        {
            cout << (star + j) % 2 << " ";
        }
        cout << endl;
    }
}
void print20(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = 2 * n - 2 - j;
            int down = 2 * n - 2 - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
     print8(n);
    // print9(n);
    // print10(n);
    // print11(n);
    // print12(n);
    // print13(n);
    // print14(n);
    // print15(n);
    // print16(n);
    // print17(n);
    // print18(n);
    // print19(n);
    //print20(n);
}
