#include<bits/stdc++.h>
using namespace std;
// Dont do in Interview ! use Recursion there
int main()
{
    string s = "cba"; // abc acb bac bca cab cba
    sort(s.begin(),s.end());
    do{
        cout << s <<endl;
    }while(next_permutation(s.begin(),s.end()));
    

}