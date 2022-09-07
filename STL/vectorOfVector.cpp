#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> &v)
{
	cout << "Size : " << v.size() << " -> Elements : ";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		// vector<int> temp; // single vector of integer
		v.push_back(vector<int>());
		for (int j = 0; j < n; j++)
		{
			int x;
			cin >> x;
			// temp.push_back(x);
			v[i].push_back(x);
		}
		// v.push_back(temp);
	}
	// v[0].push_back(10);
	// v.push_back(vector<int> ());
	
	// or u can call like this :

		// for(int i = 0; i < v.size();i++)
		// {
		// 	for(int j = 0; j < v[i].size(); j++)
		// 	{
		// 		cout << v[i][j];
		// 	}
		// 	cout << endl;
		// }
	
	
	for (int i = 0; i < v.size(); i++)
	{
		printV(v[i]);
	}
}