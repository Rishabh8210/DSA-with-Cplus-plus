#include<bits/stdc++.h>
using namespace std;
void print(vector<int> m)
{
    m.at(2) = 5;
    for(int i = 0;i<m.size();i++)
    {
        cout<<m[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }

    print(v);
    cout<<endl;
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
