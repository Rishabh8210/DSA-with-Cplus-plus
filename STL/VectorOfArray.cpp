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
	int N;
	cin >> N;
	vector<int> v[N];
	for(int i = 0; i < N; i++)
	{
		int n; 
		cin >> n;
		for(int j = 0; j < n ; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	// for(int i = 0; i < N; i++)
	// {
	// 	printV(v[i]);
	// }

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j];
		}
		cout << endl;
	}
	cout << endl;
	// cout<<v[0][0]<<endl;
}
// It behaves like 2D arrray but here rows are fixed but columns are dynamically grow(vary)

// but if u want to make rows also dynamic then create vector of vector
// vector<vector<int>> v;