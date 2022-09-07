// C++ code to demonstrate the working
// of for_each with Exception

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Helper function 1
void printx2(int a)
{
	cout << a * 2 << " ";
	if ( a % 2 == 0)
	{
		throw a;
	}
	
}

// Helper function 2
// object type function
struct Class2
{
	void operator() (int a)
	{
		cout << a * 3 << " ";
		if ( a % 2 == 0)
		{
			throw a;
			
		}
	}
} ob1;


int main()
{
	
	// Initializing array
	int arr[5] = { 1, 5, 2, 4, 3 };
	
	cout << "Using Array" << endl;
	
	// Printing Exception using for_each
	// using function
	try
	{
		for_each(arr, arr + 5, printx2);
	}
	catch(int i)
	{
		cout << "\nThe Exception element is : " << i ;
	}
	cout << endl;
	
	// Printing Exception using for_each
	// using object function
	try
	{
		for_each(arr, arr + 5, ob1);
	}
	catch(int i)
	{
		cout << "\nThe Exception element is : " << i ;
	}
	
	// Initializing vector
	vector<int> arr1 = { 1, 3, 6, 5, 1 };
	
	cout << "\nUsing Vector" << endl;
	
	// Printing Exception using for_each
	// using function
	try
	{
		for_each(arr1.begin(), arr1.end(), printx2);
	}
	catch(int i)
	{
		cout << "\nThe Exception element is : " << i ;
	}
	cout << endl;
	
	// printing Exception using for_each
	// using object function
	try
	{
		for_each(arr1.begin(), arr1.end(), ob1);
	}
	catch(int i)
	{
		cout << "\nThe Exception element is : " << i ;
	}
}
