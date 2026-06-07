#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

void explainpair()
{
    pair<int, int> p = {1, 3};
    cout << "Pair numbers by using pair :";
    // yha pair ke first or second elements print hofe
    cout << p.first << " " << p.second;
    cout << endl;
}
void explainpair1()
{
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << "Pair numbers by using pair :";
    // yha pair ke branch baan jayega or first mein 1 or second ke andar 3 4 h toh s.s ka matlb h ki 2 pair mein second number print hoga
    cout << p.first << " " << p.second.second << " " << p.second.first;
    cout << endl;
}
void explainpair2()
{
    pair<int, int> arr[] = {{1, 3}, {4, 6}, {5, 7}};
    cout << "Pair numbers by using pair :";
    // yha hum pair or arr ka use karke apne elements print kar rhe h
    cout << arr[2].second;
    cout << endl;
}
void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    for (int val : v)
    {
        cout << "Vector elements by using properties : ";
        cout << val << endl;
    }
}
void explainVector1()
{
    vector<int> v = {20, 23, 42, 54, 78};
    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();
    // nobody can ask --> //vector<int>::iterator it = v.rend();
    // nobody can ask --> //vector<int>::iterator it = v.rbegin();
    cout << "Vector elements :";
    // ye phela method h sare arr ko print karke ka but not perfect

    /* for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    } */

    // ye 2 methods best h for print arr
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Now Vector is reverse : ";

    // yha par hum vector ki help se array ko reverse kar rhe h
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *(it) << " ";
    }
}
void explainvector2()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // v.erase(v.begin()+1);
    v.erase(v.begin() + 2, v.begin() + 4);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
void explainvector3()
{
    vector<int> v(2, 100);
    cout << "BEFOR INSERT VALUE :";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "AFTER INSERT THE VALUE :";

    // yha par humne insert ki help se vector ke bich mein value pass ki h

    v.insert(v.begin() + 1, 2, 10);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // yha par hum vector ki copy bna rhe h or ye orginal vector mein change nhi karega balki vector ki copy bna kar usmien change kare ga
    vector<int> copy(2, 50);
    cout << "Now copying the vector elements :";
    v.insert(v.begin(), copy.begin(), copy.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // yha par hum vector ka size print karwa rhe h
    cout << "Vector size is :" << v.size() << endl;
    v.pop_back();
    // basically popback ka use last element ko erase karne ke liye hota h
    cout << "WE USE POP BACK NOW SIZE IS :" << v.size() << endl;
}

void explainlist()
{
    list<int> ls;
    ls.push_back(1);     // {1}
    ls.emplace_back(2);  // {1,2}
    ls.push_front(4);    // {4,1,2}
    ls.emplace_front(6); // {6,4,1,2}

    // baki sab sa,e hoga h vector jese hi

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
}
void explaindeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(6); // {6,4,1,2,}
    dq.pop_back();       //{6,4,1}
    dq.pop_front();      //{4,1}
    dq.back();
    dq.front();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
}
void explainstack()
{
    stack<int> s;
    s.push(1);    // 1
    s.push(2);    // 2,1
    s.push(3);    // 3,2,1
    s.push(3);    // 3,3,2,1
    s.emplace(5); // 5,3,3,2,1

    cout << s.top(); // print 5
    // erase 5
    s.pop();
    cout << s.top();  // 3,3,2,1 top one is 3
    cout << s.size(); // print 4
    cout << endl;
}
void explainqueue()
{
    queue<int> q;
    // first in first out fifo
    q.push(1);         // 1
    q.push(2);         // 1,2
    q.emplace(4);      // 1,2,4
    q.back() += 5;     // iska mtlb h ki last mein 5 add ho jayega toh 1 2 4+5 =9 hoga
    cout << q.back();  // print 9 --> 1,2,9
    cout << q.front(); // print 1
    q.pop();
    cout << q.front(); // print 2
}
void priorityq() {
    //max heep
    priority_queue<int> pq;
    pq.push(5); // 5
    pq.push(2); // 2,5
    pq.push(4); // 4,2,5
    pq.emplace(10);  //10,4,2,5
    cout<<pq.top(); //print 10
    pq.pop();
    // yha par hona 4 chiye tha pr 5 hua q ki priority queue kheta h jo phle aya uski priority jda hogi par jo woh number baki num se bada bhi hona chiye 
      // or by default ye maxmium se minimum print hota h jo jada bada usko uti priority baki sab se
    cout<<pq.top()<<endl; //print 5
    //min heep
    priority_queue<int,vector<int>, greater<int>> pq1;
    pq1.push(4); //4
    pq1.push(2); // 2,4
    pq1.push(5); //2,4,5
    pq1.emplace(10); // 2,4,5,10
    cout<<pq1.top(); //print 2
 }

 
 int main()
{
    // explainpair();
    // explainpair1();
    // explainpair2();
    // explainVector();
    // explainVector1();
    // explainvector2();
    // explainvector3();
    // explainlist();
    // explaindeque();
    // explainstack();
    // explainqueue();
    priorityq();

    return 0;
}