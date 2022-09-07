#include<iostream>
#include<array>
using namespace std;
void print(std::array<int,5> &t)
{
    t.at(2) = 5;
     for(int i = 0;i<5;i++)
    {
        //cout<<ar[i]<<" ";
        cout<<t.at(i)<<" ";
    }
}
int main()
{
    std::array<int,5> arr; // Declaration
    for(int i = 0;i<5;i++)
    {
        //cin >> arr[i]; // operator function []
        cin >> arr.at(i);// at function
    }
    std::array<int,5> ar = {1,2,3,4,5}; // initilization
    for(int i = 0;i<5;i++)
    {
        //cout<<ar[i]<<" ";
        cout<<ar.at(i)<<" ";
    }
    cout<<endl;
    print(arr);
}
