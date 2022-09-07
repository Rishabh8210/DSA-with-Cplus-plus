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
	vector<int> :: iterator it;
	for(it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	// c++ 11 features : u need to use c++ 11 or above version to
	// 1. Range based loops
	// 2. auto keyword
	for(int value : v) // here value store a copy of elements then perform operations
	{
		value++;
		// cout << value << " ";
	}
	for(int value : v)
	{
		cout << value << " ";
	}
	cout<<endl;
	// we can't change the data because it was copied from containers element. 
	// and if u want to change the actual value use "refrence"
	for(int &value : v)
	{
		value++;
	}
	for(int value : v)
	{
		cout << value << " ";
	}
	cout<<endl;

	// 2: auto keyword
	auto a = 1; // dynamically assume the datatype int
	auto b = 1.0; // dynamically assume float or double
	for(auto &it : v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	for(auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}







