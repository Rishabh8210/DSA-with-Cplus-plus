#include<bits/stdc++.h>
using namespace std;
void printv(int a){
    cout << a * a << " ";
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    for_each(arr,arr+5,printv);
    cout << endl;
    vector<int> t{1,2,3,4,5};
    for_each(t.begin(),t.end(),printv);

}