#include<iostream>
using namespace std;
template<class X> 
X add(X n,X m)
{
    X c = n + m;
    return c;
}
int main()
{
    float n;
    cin >> n;
    float m;
    cin >> m;
    float ans = add(n , m);
    cout<<ans;
}