// Printing Prime Factorisation of a number 
// T <= 10^6
// n <= 10^6


BruteForce
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n;
//         cin >> n;
//         // it takes linear time upto n 
//         for(int i = 2; i <= n; i++)
//         {
//             // it takes log n time 
//             while(n % i == 0)
//             {
//                 cout << i << " ";
//                 n /= i;
//             }
//         }
//         // at max this outer and inner loop takes O(n) times check using prime no.
//         // inner loop never strat iterating in prime no.
//         cout << endl;
//     }
// }
// But this solution takes O(T * n) times it means 10^6 * 10^6 = 10^12 > 10^8
// and this solution get TLE 

Let's reduce it's complexity to O(n) to O(sqrt(n))
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n;
//         cin >> n;
//         for(int i = 2; i*i <= n; i++)
//         {
             
//             while(n % i == 0)
//             {
//                 cout << i << " ";
//                 n /= i;
//             }
//         }
//         // it takes sqrt of n times
//         if(n > 1)
//             cout << n << endl;
//         cout << endl;
//     }
// }
// but this soln also get TLE because overall complexity is O(T * sqrt(n))
//                                                     = O(10 ^6 * ✓10^6) = 10^6 * 10^3
//                                                     = O(10^9) >> 10^8 TLE



Lets try to use sieve here 

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1000000;
// Create a sieve of size N 
// int spf[N + 1]; 

// void createSieve()
// {
// put the index value in each element of sieve(spf - smallest prime factorisation)
//     for(int i = 1; i <= N; i++)
//     {
//         spf[i] = i;
//     }
//     for(int i = 2; i*i <= N; i++)
//     {
//         if(spf[i] == i)
//         {
//             for(int j = i * i; j <= N; j += i)
//             {
//                 if(spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     // O(Nloglog N)
//     createSieve();
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n;
//         cin >> n;
//         // this takes log n time
//         while(n != 1)
//         {
//             cout << spf[n] <<" ";
//             n = n / spf[n];
//         }
//         cout << endl;

//     }
// }
// Now this also takes less than 10^8 times
// Overall complexity is O(T * log(n))