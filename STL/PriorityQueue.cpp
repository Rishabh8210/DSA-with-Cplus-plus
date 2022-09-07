#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> a;
    a.push(4);
    a.push(3);
    a.push(2);
    a.push(1);
    a.push(0);
    a.push(9);
    while(!a.empty())
    {
        cout << a.top()<<" ";
        a.pop();
    }
}