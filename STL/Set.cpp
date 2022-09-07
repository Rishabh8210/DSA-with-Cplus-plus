#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] ={1,2,3,4,5}; 
    set<int> st = {1,2,3,4,5};
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.insert(x);
    // }
    // for(auto it:st)
    // {
    //     cout<< it<<endl;
    // }
    // for(auto it = st.begin();it!=st.end();it++)
    // {
    //     cout<< *it<<endl;
    // }
   
    unordered_map<int,int> s= {{2,0},{7,1}};
    int target = 9;
    int nums1[4] = {2,7,9,11};
    if(s.find(target - nums1[0]) != s.end())
		{
			cout<< s[target-nums1[0]];
		}
}