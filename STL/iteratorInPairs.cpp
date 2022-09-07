#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> v = {{1,2}, {3,4}, {5,6}};
	vector<pair<int, int>> :: iterator i;
	// for(i = v.begin(); i != v.end(); i++)
	// {
	// 	cout << "First : "<< (*i).first << " Second : "<< (*i).second<<" "; 
	// 	cout<<endl;
	// }
	for(i = v.begin(); i != v.end(); i++)
	{
		cout << "First : "<< i->first << " Second : "<< i->second<<" "; 
		cout<<endl;
	}
	for(pair<int,int> &value : v)
	{
		cout<<value.first << " " <<value.second<<endl;
	}
	cout<<endl;
	for(auto &it: v)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
}

// (it).first  == it->first  both are same