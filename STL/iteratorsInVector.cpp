#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> &v)
{
	cout << "Size : "<<v.size()<<" -> Elements : ";
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout<<endl;
}
int main()
{
	vector<int> v = {1,2,3,4,5};
	// for(int i = 0; i < v.size(); i++)
	// {
	// 	cout << v[i] << " ";
	// }
	vector<int> :: iterator it; //Create a iterator or vector<int> :: iterator it = v.begin();
	for(it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	
}

// iterator points the element of container
