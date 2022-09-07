#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            sum+= i;
        }
    }
    cout << sum << endl;
}
// it takes O(n) time

// Optimal version
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            sum+= i;
            if((n / i) != i)
            {
                sum+= (n / i);
            }
        }
    }
    cout << sum << endl;
}
