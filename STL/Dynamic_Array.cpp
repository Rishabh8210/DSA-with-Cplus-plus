#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    // int arr[5];
    int *arr = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];

    }
        for(int i = 0; i < N; i++)
    {
        cout << *(arr+i);
    }
}

// *(arr) = arr[0]
// *(arr + i) = arr[i];

// this is possible !
// int *p = &N;
// cout << p[0];
// cout << *p;
// Both are same