/* Kth prime 
Input :
An integer starting the number of quries (equal to 50000), and Q lines follows, each containing one integer K between 1 to 5000000 inclusive
Output : 
Q lines with the answer of each query : the kth prime

Exapmle:
        7 <-- Query                 Output 
        1                             2
        10                            29
        100                           541
        1000                          7919 
        10000                         104729
        100000                        1299709
        1000000                       15485863
*/

#include<bits/stdc++.h>
using namespace std;
// int N = 100000000; if u submit in 10^8 then it gets TLE because every loop is iterating upto 10^8 so ther are possibility to get TLE

const int N = 86028121; //  prime betn 1 to 5000000 
bool sieve[N + 1];
vector<int> ds;
void createSieve()
{
    for(int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }
    for(int i = 2; i * i <= N; i++)
    {
        if(sieve[i] == true)
        {
            for(int j = i * i; j <= N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
/*
    //   for checking limits  50000000
    int maxLimit = 5 * 1000000;
    int count = 0;
    int size = 1;
    for(int i = 2; ; i++)
    {
        if(sieve[i] == true)
        {
            count++;
        }
        if(count == maxLimit)
        {
            size = i;
            break;
        }
    }
*/





    for(int i = 2; i <= N; i++)
    {
        if(sieve[i] == true)
        {
            ds.push_back(i);
        }
    }
}
int main()
{
    createSieve();
    int q;
    cin >> q;
    while(q--){
        int k;
        cin >> k;
        cout << ds[k-1] << endl;
    }
}