/*
Printing all the primes in the given ranges, 
T denoting test cases and L, R denoting left and right range

Constraints
1 <= T <= 10
1 <= L, R <= 10^12
R - L <= 10^6 (Difference is <= 10^6)

*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
bool sieve[N + 1];
void createSieve()
{
    for(int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }

    for(int i = 2; i*i <= N; i++)
    {
        if(sieve[i] == true)
        {
            for(int j = i * i; j <= N; j+=i)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int N){
    vector<int> ds;
    for(int i = 2; i<= N; i++)
    {
        if(sieve[i] == true)
        {
            ds.push_back(i);
        }
    }
    return ds;
}
int main()
{
    // O(10^6)
    createSieve();
    int T;
    cin  >> T;
    while(T--)
    {
        int L, R;
        cin >> L >> R;
        // Step 1: Generate all Primes till sqrt(R)
        // O(✓10^12) = )(10^6)
        vector<int> primes = generatePrimes(sqrt(R));

        // Step 2: Create a dummy array of size R - L + 1 and makes everyone as 1
        // O(10^6) mentioned the size i.e., 10^6 then we r rolling 10^6
        int dummy[R - L + 1];
        for(int i = 0; i<= R - L + 1; i++)
        {
            dummy[i] = 1;
        }

        // Step 3: for all prime number marks its multiples as fales 
        // Iterating in primes , primes is near about 10^4 or somtimes some greater than 10^4, because u r iterating in primes till 10^6 then 10^6 is generating primes, that will be around 10^4  
        for(auto pr: primes){
            int firstMultiple = (L / pr) * pr;
            // here if firstMultiple is less than L then add pr and u get ur firstMultiple else do nothing u have ur firstMultiple
            if(firstMultiple < L)
                firstMultiple += pr;
                // this loop somtimes jumping by 2 sometime 3 somtimes 5,7,11,..... this is not linear loop then this is lesser than 10^6 this can't be justified
            for(int j = max(firstMultiple, pr*pr); j<= R; j += pr){
                dummy[j - L] = 0;
            }
            // 1st time (R-L+1)/2 .... 2nd time (R-L+1)/3 .... 3rd time (R-L+1)/3 .....
             


        }

        // Step 4: Get all the Primes 
        for(int i = L; i <= R; i++)
        {
            if(dummy[i - L] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    
    }
}

// Overall time complexcity is
// O(10 *(10^6 + 10^6 + 10^4)) overall it is <= 10^7
// overall it is less than or equal than 10^7



// BruteForce takes
// 1 test case loop takes O(10)
// 2nd Loop takes O(L-r)
// 3rd loop calculate prime every time O(r)
// overall 

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int T;
    cin >> T;
    while(T--){
        int L,R;
        cin >> L >> R;
        for(int i = L; i<= R; i++)
        {
            int count = 0;
            for(int j = 1; j<= i; j++)
            {
                if(i % j == 0)
                count++;
            }
            if(count == 2)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}

// Overall O(T * R * R) its too high