#include<bits/stdc++.h>
using namespace std;
// Don't do in Interview ! use Recursion there
int main()
{
    string s = "abc"; // abc acb bac bca cab cba
    bool ans = prev_permutation(s.begin(),s.end());
    cout<<ans<<endl;
    cout<<s<<endl;
    string d = "cba";
    bool ans1 = next_permutation(d.begin(),d.end());
    cout<<ans1<<endl;
    cout<<d<<endl;
}