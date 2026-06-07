#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
void reverse()
{
    int n, lastdigit, rev = 0;
    cout << "Enter a postive number :" << endl;
    cin >> n;
    cout << "Number: " << n << endl;
    while (n > 0)
    {
        lastdigit = n % 10;
        n /= 10;
        rev = rev * 10 + lastdigit;
    }
    cout << "Reverse number is :" << rev;
}
void count_digit()
{
    long long n;
    int count = 0;
    cout << "Enter a postive number :" << endl;
    cin >> n;
    cout << "Number: " << n << endl;
    while (n > 0)
    {
        n /= 10;
        count += 1;
    }

    // better way to solv count digit number
    // int count = (int)(log10(n) + 1);
    cout << "Total digit is :" << count;
}
void palindrom()
{
    int n, rev = 0;
    cout << "Enter a positive number: " << endl;
    cin >> n;
    int dup = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n /= 10;
        rev = rev * 10 + lastdigit;
    }
    if (dup == rev)
    {
        cout << "Yes, it is a palindrom number.";
    }
    else
    {
        cout << "No , its not a palindrom number.";
    }
}
void armstrong()
{
    int n, sum = 0;
    cout << "Enter a positive number: ";
    cin >> n;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        sum += (ld * ld * ld);
    }
    if (dup == sum)
    {
        cout << "Yes it is a armstrong.";
    }
    else
    {
        cout << "No its not a armstrong.";
    }
}
void alldivisor()
{
    int n;
    vector<int> ls;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "All the " << n << " divisors : ";
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        { // ese bhi kar sakte thy but ye slow h iski tc O(N) h
            // cout<<i<<" ";

            // ye approch fast h or O(rootN) H
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
void Checkprime()
{
    bool is_prime = true;
    int n;
    cout << "Enter a positive number :";
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if (is_prime)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
}
void gcd()
{
    int n1, n2;
    cout << "Enter a positive number :";
    cin >> n1 >> n2;
    while (n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout << "Hcf is :" << n1;
}
void qandr()
{
    int dividend, divisor, quotient, remainder;
    cout << "Enter a dividend :";
    cin >> dividend;
    cout << "Enter a divisor :";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient is: " << quotient << endl;
    cout << "Remainder is: " << remainder << endl;
}
void swaping()
{
    int a, b;
    cout << "Enter a two positive number : ";
    cin >> a >> b;
    cout << "Before swap a and b :" << a << " " << b << endl;
    swap(a, b);
    cout << "After swap a and b :" << a << " " << b << endl;
}
void EvenorOdd()
{
    int num;
    cout << "Enter a positive number : ";
    cin >> num;
    if (num & 1)
        cout << "is a odd number." << endl;
    else
        cout << num << " is a even number.";
}
void largestnum()
{
    int num1, num2, num3;
    cout << "Enter a three positive number : ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3)
        cout << "largest number is " << num1;
    else if (num2 >= num1 && num2 >= num3)
        cout << "lagrest number is " << num2;
    else
        cout << "largest number is " << num3;
}
void findroots()
{
    float x1, x2, a, b, c, Discriment;
    cout << "Enter the a value :";
    cin >> a;
    cout << "Enter the b value :";
    cin >> b;
    cout << "Enter the c value :";
    cin >> c;
    cout << "Now its your quadratic equation :" << a << "xsq" << b << "x" << c << " = 0" << endl;
    Discriment = b * b - 4 * a * c;
    if (Discriment > 0)
    {
        x1 = (-b + sqrt(Discriment)) / (2 * a);
        cout << "Root 1 :" << x1 << endl;
        x2 = (-b - sqrt(Discriment)) / (2 * a);
        cout << "Root 2 :" << x2;
    }
    else if (Discriment == 0)
    {
        x1 = x2 = -b / (2 * a);
        cout << "Root are real and same : " << x1;
    }
    else
    {
        int realpart = -b / (2 * a);
        int imgpart = sqrt(-Discriment) / (2 * a);
        cout << "Roots are complex and different.";
        cout << "Root 1 :" << realpart << endl;
        cout << "Root 2 :" << imgpart << endl;
    }
}
void sum()
{
    int num, sum = 0;
    cout << "Enter a positive number :";
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of " << num << " is :" << sum;
}
void array()
{
    vector<int> arr = {5, 3, 10, 6, 1, 15};
    int target = 20;
    cout << "Target is :" << target << endl;
    for (int i = 0; i <= arr.size(); i++)
    {
        for (int j = 0; i <= arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
void lcm()
{
    int n1, n2;
    cout << "Enter a positive number : ";
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    int lcm = (n1 * n2) / n2;
    cout << "lcm is : " << lcm;
}
void factorial()
{
    int n;
    long fact = 1.0;
    cout << "Enter a number :";
    cin >> n;
    if (n < 0)
    {
        cout << "Error";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
    cout << "Factorial of " << n << " is :" << fact;
}
void power()
{
    float base, expo, result;
    cout << "Enter base and exponent :";
    cin >> base >> expo;
    result = pow(base, expo);
    cout << base << "^" << expo << " = " << result;
}
void fibo()
{
    int n, t1 = 0, t2 = 1, nextterm = 0;
    cout << "Enter a number :";
    cin >> n;
    cout << "fibonacci series : " << t1 << " , " << t2 << " , ";
    nextterm = t1 + t2;
    while (nextterm <= n)
    {
        cout << nextterm << " , ";
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
}
int main()
{ // fibo();
  // reverse();
  // count_digit();
  // palindrom();
  // armstrong();
  // alldivisor();
  // Checkprime();
  // gcd();
  // qandr();
  // swaping();
    // EvenorOdd();
    // largestnum();
    // findroots();
    // sum();
    // array();
    // lcm();
     factorial();
    // power();
    return 0;
}