// Constraints
// N <= 1000000
// T <= 1000000

// # Approach 1
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         if(n % i == 0)
//         {
//             cnt++;
//         }
//     }
//     if(cnt == 2) cout << "Yes it is a Prime"<<endl;
//     else cout << "No it is not a Prime"<<endl;
// }
// It is a Bruteforce solution having O(n) time complexity.


// # Approach 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i = 1; i <= sqrt(n); i++)
//     {
//         if(n % i == 0)
//         {
//             count++;
//             if((n/i) != i)
//             {
//                 count++;
//             }
//         }
//     }
//     if(count == 2) cout << "Yes it is a Prime"<<endl;
//     else cout << "No it is not a Prime"<<endl;
// }
// It is an Optimal solution having O(sqrt(n) * log(n)) time complexity.
// here in every itertation we need to find or call sqrt function for sq. root or for checking condition 


// # Approach 3
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sqn = sqrt(n);
//     int count = 0;
//     for(int i = 1; i <= sqn; i++)
//     {
//         if(n % i == 0)
//         {
//             count++;
//             if((n/i) != i)
//             {
//                 count++;
//             }
//         }
//     }
//     if(count == 2) cout << "Yes it is a Prime"<<endl;
//     else cout << "No it is not a Prime"<<endl;
// }
// It is an Optimal solution having O(sqrt(n)) time complexity.


// # Approach 4
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 1; i*i <= n; i++) 
//     { 
//         if(n % i == 0) 
//         {
//             cnt++;
//             if((n / i) != i)  
//             {
//                 cnt++;
//             }
//         }
//     }
//     if(cnt == 2) cout << "Yes it is a Prime"<<endl;
//     else cout << "No it is not a Prime"<<endl;
// }
// It is an Optimal solution having O(sqrt(n)) time complexity.
 

////////// SIEVE of ERATOSTHENES  ////////////////
// Bruteforce
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6;
// bool sieve[N+1];
// void createSieve()
// {
//     for(int i = 2; i <= N; i++)
//     {
//         sieve[i] = true;
//     }
//     for(int i = 2; i <= N; i++)
//     {
//         if(sieve[i] == true)
//         {
//             for(int j = 2*i; j <= N; j += i)
//             {
//                 sieve[j] = false;
//             }
//         }
//     }
// }
// int main()
// {
//     createSieve(); //  same code 
//     // for(int i = 2; i <= N; i++)
//     // {
//     //     sieve[i] = true;
//     // }
//     // for(int i = 2; i <= N; i++)
//     // {
//     //     if(sieve[i] == true) 
//     //     {
//     //         for(int j = 2*i; j <= N; j += i)
//     //         {
//     //             sieve[i] = false;
//     //         }
//     //     }
//     // }

//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         if(sieve[n] == true)
//         cout << "Prime"<<endl;
//         else 
//         cout << "Not Prime" << endl;
//     }
// }
// but this will get huge complexity there is N loop and there is inner loop also

// Let Optmize Sieve
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
bool sieve[N+1];

int main()
{
    for(int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }

    //  this 2 loops runs upto O(n*log(logN)) 
    for(int i = 2; i*i <= N; i++)
    {
        if(sieve[i] == true) 
        {
            for(int j = i*i; j <= N; j += i)
            {
                sieve[i] = false;
            }
        }
    }

    int t;
    cin >> t;
    
    // O(T)
    while(t--)
    {
        int n;
        cin >> n;
        if(sieve[n] == true)
        cout << "Prime"<<endl;
        else 
        cout << "Not Prime" << endl;
    }
}
// overall O(n*log(logN)) + O(T) = O(10^6) + O(10^6) <<<< O(10^8)
//                    log(logN) is approxciametly Constant 

