// input -> Rishabh 
// Output -> Rishabh
// char datatype store single character
// string -> collection of character or array of character
// %c -> takes single char  %s-> takes a string
// 1000000000 
// -10^9 < int < 10^9  -2^31 < int < 2^31-1    -2147483648 < int < 2147483647
// we cannot use operators to perform operations(like compare,to copy, concatinate etc) in character array or c style string me

// C/Cpp style char is faster than string class,but string class provide sceurity
// #include<stdio.h>
// #include<string.h> 
// int main()
// {
//     char name[6];
//     int i;
//1st method
//     // scanf("%s",&name); // "Rishabh" 'a'
//     // printf("%s",name);  // "Rishabh"
// 2nd metthod
//     for(i = 0;i<5;i++)
//     {
//         scanf(" %c",&name[i]); // 0 a 1 m 2 a 3 n 4 \0
//     }
//     name[i] = '\0';
//     for(int i = 0;name[i] !='\0';i++)
//     {
//         printf("%c",name[i]);
//     }
// }



// C++ me kr lena convert printf("");-> cout<<  scanf("");-> cin >>

// #include<stdio.h>
   //<string.h> // func-> strlen() , strrev(), strcmp(), strcat(), strcpy()
// #include<string.h>
// int main()
// {
//     char name[] = "Rishabh";
//     char name1[] = "Rishabh";

//     // char name2[] = name1; possible ni h char. array me
//     int namel=0;
//     int name1l=0;
        
        // For string length
//     for(int i = 0;name[i] != '\0';i++)
//     {
//         namel++;
//     }
//     for(int i = 0;name1[i] != '\0';i++)
//     {
//         name1l++;
//     }
// 2nd method for length is 
    // namel = strlen(name);
    // name1l = strlen(name1);

//     // length ko comapre kr ke pata lagaye ki equal hai ya ni
//     if(name1l == namel) // aman amar 
//     {
//         for(int i = 0;name[i] != '\0';i++)
//         {
//             if(name[i] != name1[i])
//             {
//                 printf("\nline 52Ni hai equal");
//                 break;
//             }
//         }
//         printf("equal hai");
//     }
//     else
//     printf("\nline 59 hai Ni hai equal");
//     char name2[20] ;
    
//     // strcpy(kisme value dalna hai,kya value dalna hai);
//     strcpy(name2,name);
//     printf("\n%s",name2);
// }

// C++ me aaya char ka baap commonly known as string class
// string class inbuilt class hai jo pehle se bana huwa hai tumhara kaam hai bss string class ka object banao or use kro
// class A{
//     private:

//     public:
// };
// int main()
// {
//     A obj;
// }

// class string{
//     private:
//     public:
    //3 constrctor

// };
// int main()
// {
//     string s;
// }
 
// class vector{
//     private:
//     public:
// };
// int main()
// {
//     vector a;
// }

// string datatype ni hau
// string NULL or '\0' terminate hoga
// in String class we can use operators to perform operations like concatinate(+),compare(>,<,=)etc
// To use string class you need to write header file first 
// #include<string>
// string.h or string dono alg alg hai 
// string class  basic_string class se inherit hokr bana hai 
// there are too many constructor in string class ,some of them are
// 1.string(){} Default 
// 2.string(const char *s){....} parametrished
// 3.string(const string &s){......}  copy ya refrence

// #include<iostream>
// #include<string> 
// using namespace std;

// int main()
// {
    
//     // string st[3] = {"ram","shyam","fid"};
//     string s; // Default constructor ""
//     string s1 = "hello"; // Parametrised constructor
//     string s1("hello");
//     char name[5] = "Ram";
//     string s4 = name;
//     // string s4(name);
//     string s2(s1);
//     string s3 = string("hello");
//     string s2 = s1;
// }





// #include<iostream>
// #include<string> 
// using namespace std;
// int main()
// {
//     string s = "rishabh";
//     string s1;
//     s1 = "Pandey";
//     string s2 = s1;
//     string s3 = s1 + s2;
//     // string s3(s1+s2);
//     cout<<s3;
//     if(s > s1){
//         cout<<"hum bada hai";
//     }
//     else{
//         cout<<"Tum bde ho";
//     }

//     // char name[] = "rishabh";
//     // char name1[20];
//     // name1 = "Pandey";
//     // char name2[20] = name1;
//     // strcpy(name2,name1);

// }
// Operators :- Use
    // = -> Assignment
    // + -> conatenation
    // += -> concatenation assignment
    // == -> equality
    // != -> Inequakity
    // < -> less than
    // > -> greater than
    // <= -> less than equal to 
    // >= -> greater than equal to

    // << -> Insertion (for output)
    // >> -> Extraction (for input)
    // 
// Member Functions:-
// string s; s = ""
// 1. .assign(); -> s.assign("Hello"); s = hello
// 2. .append(); -> s.append("DIng"); s = helloDIng
//                                                     0 1 2 3 4 5 6 7 8 9 10 11 12
// 3. .insert(index,value); -> s.insert(2,"Dong"); s = h e D o n g l l o D I   n  g
// 4. .replace(index,length,value); -> s.replace(2,4,e); s = h e e l l o D I n g
// 5. .erase(); -> s.erase(); -> s = "" 
//                                       0 1 2 3 4
//  .assign(); -> s.assign("hello"); s = h e l l o
//  int ind = -1;
// 6. .find(); -> ind = s.find("hello"); ind = 0
// if(ind == -1) { cout<< " Ni mila";}
//                              0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

// s.append("world hello"); s = h e l l o   w o r l d      h  e  l  l  o

// 7. .rfind(); -> ind = s.rfind("hello"); ind = 12 
// string s1 = "Rishabh";
// 8. .compare(s1); -> s.compare(s1); 0 -> equal (-)negative chota hai (+) bada hai
//    s = Ram s1 = Rai ind =  s.comapre(s1); s > = < s1  ind = -4
//         if(ind > 0) { cout<<"Chota hai"}
    //   else if(ind < 0) { cout<<"Bada hai"}
    //   else  { cout<<"Chota hai"}
    // s = neha char name[10];
//  9. .c_str(); -> strcpy(name,s.c_str()); 
// 10. .size(); -> int size = s.size(); -> return size 







// Array-List

// Array container in STL provide us the implementation of static array
// use array header file : #include<array>
// syntax : std::array<object_type,array_size> obj;
// syntax : array<object_type,array_size> obj; 

// Array is a container that encapsulates fixed size array. 
// Array size is needed at compile time
// Assign by value is actually by value (call bye value)

 
// What is the need of std array , because we already have C/C++ array ?
// C/C++ style -> int a[5];
// std array -> array<type,5> a;

// Declaration : 
// array<object_type,array_size> obj; -> It creates a empty array of object_type with maximum size of array_size
// eg -> array<int, 5> Arr; // declare
// eg2-> array<int,5> Arr = {1,2,4,5,6}; // initilize
// eg.3-> array<int,5> A; // declare
//        A = {1,2,3,5,6};  //initilise


// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {       // C style Array
//     int C_style_Array1[5] = {1,2,3,4,5};
    
//     int C_style_Array2[] = {1,2,3,4,5};
    
//     int C_style_Array3[5];
//     for(int i = 0;i<5;i++){
//         cin >> C_style_Array2[i];
//     }
       // int a[5];
       // a = {1,2,3,4,5}; we can not apply technique to inintilize c style array 

//     int n;
//     cin >> n;
//     int C_style_Array4[n];
//     for(int i = 0;i<5;i++){
//         cin >> C_style_Array4[i];
//     }
//         // STL Array
//     array<int,5> STL_style_Array;
//     for(int i = 0;i<5;i++){
//         cin >> STL_style_Array[i];
//     }
//     array<int,7> STL_style_Array2 = {1,2,3,4,5,6,7};
    
//     array<float,4> STL_style_Array3;
//     STL_style_Array3 = {1.2,2.3,4.5,6.7};
// }


// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     array<int,5> Arr;
//     for(int i = 0;i<5;i++)
//     {
//         cin >> Arr[i];
//     }
//     for(int i = 0;i<5;i++)
//     {
//         cout<<Arr[i]<<" ";
//     }
// }

// Member Function :- 
// 1) .at(); -> This func returns value in the array at given range. else thrown range exceptions
// 2) [];operator -> this use of operator [] is same as it was for normal array
//                 eg. cout<<Arr[1]; 
// 3) .front(); -> It returns the first element in the array
// 4) .back(); -> It returns the last element in the array
// 5) .fill(value); -> This func. assigns the given value to every element of array
// 6) .size(); -> This func returns size of array
// 7) .begin(); -> Returns the iterator of first element or index
// 8) .rbegin(); -> Returns the iterator of reverse of first element or index or end() - 1
// 9) .end(); -> Returns the iterator of right after the last element or index last element ka bagl wala iterator ko return krega 
// 10).rend(); ->Returns the iterator of left before the first element or index first element ka piche wala iterator ko return krega 
// 11).swap(Jisko krna hai swap); -> This func swaps the content of 2 array of same type or same size
                                    //  It swaps index wise, thus element of i index of first array will be swapped out with the element of index i of second array
                                    // first_array.swap(second_array);
// 12).empty(); -> Check wheather it is empty or not return 0 or 1 
                  // 0 means -> false or not empty, 1 means true or empty

                
// to find the index of iterator = iterator - first index of array; 

// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     array<int,5> Arr;
//     cout<<"Enter Elements : ";
//     for(int i = 0;i<5;i++)
//     {
//         // cin >> Arr[i]; // one way 
//         cin >> Arr.at(i); // another way
//     }
//     for(int i = 0;i<5;i++)
//     {
//         cout<<Arr.at(i)<<" "; // New fashion  one way 
//         // cout<<Arr[i]<<" "; // old fashion  another way
//     }
//     // cout<<Arr.at(6)<<" "; // Exception -> std:Out of range, because we are accessing array element out of range. 
//     cout<<endl;

//     // For First element
//     int first_element = Arr.front();
//     cout <<"First element is : "<<first_element<<endl;

//     // For Last element
//     int last_element = Arr.back();
//     cout <<"Last element is : "<<last_element<<endl;

//     array<int,5> Arr2;

//     //fill function
//     Arr2.fill(10);
//     for(int i = 0; i < 5; i++)
//     {
//         cout << Arr2.at(i)<<" ";
//     }

//     //size function
//     int Array2_size = Arr2.size();
//     cout << "\nSize od 2nd Array is : " << Array2_size << endl;
    
//     //Normalyy kr lo
//     for(int i = 0; i < 5; i++)
//     {
//         cout << Arr2[i]<<" ";
//     }
//     //  Iterator 
//     //for(auto name_of_variable : object_name){}
//     for(auto it : Arr2)
//     {
//         cout << it << " ";
//     }

//     // 2nd Way 10 10 10 10 10


//     for(auto it = Arr2.begin();it != Arr2.end();it++)
//     {
//         cout << *it << " ";
//     }

//     cout<<endl<<"After Swapping First Array looks like"<<endl;
//     Arr.swap(Arr2);
//     for(auto it : Arr)
//     {
//         cout << it << " ";
//     }
//     cout<<"\n2nd Array "<<endl;
//     for(auto it : Arr2)
//     {
//         cout << it << " ";
//     }

//     array<int,0> A;
//     cout<<"\nEmpty hai ya  ni check kr rhe"<<endl;
//     int isempty = A.empty();
//     cout << isempty;
// }


// Proof of this statement "Assign by value is actually by value (call bye value)"

// using Normal Array

// #include<iostream>
// using namespace std;
// void rev(int a[],int n)     // void rev(int *a,int n)
// { // 6 5 4 3 1
//     cout<<"Abb mujhe cheda gya"<<endl;
//     for(int i = 0;i<n/2;i++)
//     {
//         int temp = a[i];
//         a[i] = a[n-1 - i];
//         a[n-1 - i] = temp; 
//     }
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
// }
// int main()
// {
//     int a[5] = {1,3,4,5,6};
//     cout<<"Suru me mai aisa tha"<<endl;
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
//     cout<<endl;
//     rev(a,5);
//     cout<<endl;
//     cout<<"Me poora cheda gya"<<endl;
//     for(int i =0;i<5;i++)
//     cout << a[i] << " ";
// }

//Using STL array or standard array

// #include<iostream>
// #include<array>
// using namespace std;
// void rev(array<int,5> A)
// {
//     int length = A.size();
//     cout<<"\nAbb mujhe cheda gya"<<endl;
//     for(int i = 0;i<length/2;i++)
//     {
//         int temp = A.at(i);
//         A.at(i) = A.at(length - 1 -i);
//         A.at(length - 1 -i) = temp;
//     }
//     for(auto it : A)
//     {
//         cout << it << " ";
//     }
// }
// int main()
// {
//     array<int,5> A;
//     A = {1,2,3,4,5};
//     cout<<"Suru me mai aisa tha"<<endl;
//     for(auto it : A)
//     {
//         cout << it << " ";
//     }
//     rev(A);
//     cout<<endl;
//     cout<<"Kuch farkk ni pada"<<endl;
//     for(auto it : A)
//     {
//         cout << it << " ";
//     }
// }


//   Vector
// Header file : #include<vector>
// syntax -> std::vector<ObjectType> object_name; 
// It is a sequence container also called Dynamic array or Array List
// Its size can gron and shrink dynamically and no need to provide size at compile time
// Declaration: 
// vector<int> vec;
// vector<int> vec1(5);
// vector<int> vec2(size,fill);
// vector<int> vec3(10,5);
// vector<int> vec4 = {1,2,3,4,5}; // initilizer list
// vector<int> vec5{1,2,3,4,5}; // Uniform initilization
// vec.at(3) = 10;
// vec[3] = 10;


//Functions:
//1).at() -> 
//2).front()->
//3).back()->
//4).data()->
//5)[] operator ->
//6) == >= <= != < >
//7).push_back(value);-> 12 13 34 231 
//8).pop_back();->
//9).capacity(); -> vector total space
//10).size();  vector size
//11).clear();
//12)begin()
//13)rbegin()
//14)end()
//15)rend();
//16)insert()
//17)emplace()
//18)reverse();
//19)assign(size,fill);
//20)swap();

