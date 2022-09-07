// pair class header file is utility 

#include <iostream>
#include <string>
#include <utility> // Header file
using namespace std;
  
int main()
{
    pair<string, int> g1;
//     initilization technique
    pair<string, int> g2("Quiz", 3);
    pair<string, int> g3(g2);
    pair<int, int> g4(5, 10);


  // string("") -> constructor of string class
    g1 = make_pair(string("Geeks"), 1);
    g2.first = ".com";
    g2.second = 2;
  
    cout << "This is pair g" << g1.second << " with "
         << "value " << g1.first << "." << endl
         << endl;
  
    cout << "This is pair g" << g3.second << " with value "
         << g3.first
         << "This pair was initialized as a copy of "
         << "pair g2" << endl
         << endl;
  
    cout << "This is pair g" << g2.second << " with value "
         << g2.first << "\nThe values of this pair were"
         << " changed after initialization." << endl
         << endl;
  
    cout << "This is pair g4 with values " << g4.first
         << " and " << g4.second
         << " made for showing addition. \nThe "
         << "sum of the values in this pair is "
         << g4.first + g4.second << "." << endl
         << endl;
  
    cout << "We can concatenate the values of"
         << " the pairs g1, g2 and g3 : "
         << g1.first + g3.first + g2.first << endl
         << endl;
  
    cout << "We can also swap pairs "
         << "(but type of pairs should be same) : " << endl;
    cout << "Before swapping, "
         << "g1 has " << g1.first << " and g2 has "
         << g2.first << endl;
    swap(g1, g2);
    cout << "After swapping, "
         << "g1 has " << g1.first << " and g2 has "
         << g2.first;
  
    return 0;
}


// pair has 3 member function 
// 1> make_pair() -> use to create pairs
// 2> swap() -> use to swap between pairs
// 3> tie() -> use to create refrence value it has 2 argument and a ignore keyword


// pait<int,int> t; 
// make pair() syntax -> t = make_pair(argument1,argument2);

// example
// CPP Program to demonstrate make_pair()

#include <iostream>
#include <utility>
#include <string>

using namespace std;
int main()
{
	pair<string, int> PAIR1;
	PAIR1 = make_pair("GeeksForGeeks is Best", 4.56);

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;
	return 0;
}


// 2> swap() -> syntax -> pair_name.swap(pair_name);
// example
// CPP Program to demonstrate swap()
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<char, int> pair1 = make_pair('A', 1);
	pair<char, int> pair2 = make_pair('B', 2);

	cout << "Before swapping:\n ";
	cout << "Contents of pair1 = " << pair1.first << " "<< pair1.second;
	cout << "Contents of pair2 = " << pair2.first << " "<< pair2.second;
	pair1.swap(pair2);

	cout << "\nAfter swapping:\n ";
	cout << "Contents of pair1 = " << pair1.first << " "<< pair1.second;
	cout << "Contents of pair2 = " << pair2.first << " "<< pair2.second;
	return 0;
}


// 3> tie() -> syntax -> tie(argument,argument) = pair_name;
// example
// CPP code to illustrate tie() in Pair
#include <bits/stdc++.h>
using namespace std;
int main()
{
	pair<int, int> pair1 = { 1, 2 };
	int a, b;
	tie(a, b) = pair1;
	cout << a << " " << b << "\n";

	pair<int, int> pair2 = { 3, 4 };
	tie(a, ignore) = pair2;

	// prints old value of b
	cout << a << " " << b << "\n";

	// Illustrating pair of pairs
	pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
	int x, y;
	char z;

	// tie(x,y,z) = pair3; Gives compilation error
	// tie(x, tie(y,z)) = pair3; Gives compilation error
	// Each pair needs to be explicitly handled
	x = pair3.first;
	tie(y, z) = pair3.second;
	cout << x << " " << y << " " << z << "\n";
}

