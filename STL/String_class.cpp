// input -> Rishabh 
// Output -> Rishabh
// char datatype store single character
// string -> collection of character or array of character
// %c -> takes single char  %s-> takes a string
// 1000000000 
// -10^9 < int < 10^9  -2^31 < int < 2^31 -1    -2147483648 < int < 2147483647
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