// #include<iostream>
// using namespace std;
// void rev(int a[],int n)     // void rev(int *a,int n)
// { // 6 5 4 3 1
//     cout<<"Abb mujhe cheda gya"<<endl;
//     for(int i = 0;i<n/2;i++)
//     {
//         int temp = a[i];
//         a[i] = a[n-1 - i];
//         a[n-1 - i] = temp; 
//     }
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
// }
// int main()
// {
//     int a[5] = {1,3,4,5,6};
//     cout<<"Suru me mai aisa tha"<<endl;
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
//     cout<<endl;
//     rev(a,5);
//     cout<<endl;
//     cout<<"Me poora cheda gya"<<endl;
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
// }
#include<iostream>
#include<array>
using namespace std;
void rev(array<int,5> A)
{
    int length = A.size();
    cout<<"\nAbb mujhe cheda gya"<<endl;
    for(int i = 0;i<length/2;i++)
    {
        int temp = A.at(i);
        A.at(i) = A.at(length - 1 -i);
        A.at(length - 1 -i) = temp;
    }
    for(auto it : A)
    {
        cout << it << " ";
    }
}
int main()
{
    array<int,5> A;
    A = {1,2,3,4,5};
    cout<<"Suru me mai aisa tha"<<endl;
    for(auto it : A)
    {
        cout << it << " ";
    }
    rev(A);
    cout<<endl;
    cout<<"Kuch farkk ni pada"<<endl;
    for(auto it : A)
    {
        cout << it << " ";
    }
}
