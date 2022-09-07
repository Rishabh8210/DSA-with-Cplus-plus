// How many number on the range 1 - 10^6 have minimum prime factor as n
// 1 <= Q<= 10^6

// n = 2 -> 4,6,8,10,12,14,16,18,20..... 
// n = 3 -> 9,15,21,27......
// n = 5 -> 25....

// Brute force solution
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int q;
//     cin >> q;
//     while(q--){
//         int n;
//         cin >> n;
//         int cnt = 0;
//         for(int i = 2; i <= 1000000; i++)
//         {
//             if(n % i == 0)
//             {
//                 cnt++;
//             }
//         }

//         cout << cnt << endl;
//     }
// }
// This solution takes O(Q * 10^6) times its get TLE


// Optimised solution is using Sieve 
#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
int sieve[N+1];
void createSieve()
{
    for(int i = 2; i <= N; i++)
    {
        sieve[i] = 1;
    }
    for(int i = 2; i*i <= N; i++)
    {
        if(sieve[i] == 1)
        {
            for(int j = i*i; j <= N; j+=i)
            {
                if(sieve[j] != 0)
                {
                    sieve[i]++;
                    sieve[j] = 0;
                }
            }
        }
    }
}
int main()
{
    // this function takes O(N log(LogN))
    createSieve();
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
    // here we can return ans in O(1)
        cout << sieve[n] << endl;
    }
}
// This solution takes O(Q * 1) + Q(Nlog(logN)) times and it is lesser than 10^8 (1 sec)
