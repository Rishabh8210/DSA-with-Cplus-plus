#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = n, b = n, c = n;
        for (int i = 2; i*i<= n; i++)
        {
            if (n % i == 0)
            {
                a = i; 
                break;
            }
        }
        n = n / a;
        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                if(i != a)
                {
                    b = min(b, i);
                }
                if((n/i) != i)
                {
                    if((n/i) != a)
                    {
                        b = min(b, n/i);
                    }
                }
            }
        }
        c = n / b;

        if (c > 1 && a != b && b != c)
        {
            cout << "YES";
            cout << a << " " << b << " " << c;
        }
        else
            cout << "NO";
    }
}