#include<array>
#include<iostream>
using namespace std;
int main()
{
    array<array<int,5>,5> v;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5;j++)
        {
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        
        for(int j = 0; j < v[i].size();j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

}
