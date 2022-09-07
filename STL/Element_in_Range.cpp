// for(auto &it : s){
// 	        if(s.find(n) == s.end() || s.find(A) == s.end() || s.find(B) == s.end())
// 	        {
// 	            return false;
// 	        }
// 	    }
#include<bits/stdc++.h>
using namespace std;
bool check_Range(int *arr,int n,int A,int B)
{
    for(int i = 0; i< n; i++)
    {
        arr[i] = arr[i] - A;
    }
    int range = B - A;
    if(range < 0) range = range * -1;
    for(int i = A; i <= B ; i++)
    {
        if(arr[i] < 0 || arr[i] > range)
            return 0;
    }
    return 1;
}
int main()
{
    int n,A,B;
    cin >> n >> A >> B;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];

    bool ans = check_Range(arr,n,A,B);
    cout << ans;
}