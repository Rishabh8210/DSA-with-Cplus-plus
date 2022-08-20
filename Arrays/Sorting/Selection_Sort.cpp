#include<iostream>
using namespace std;
void selectionSort(int *arr,int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {

            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void print(int *arr,int n)
{
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {10,4,1,6,9,2};
    int n = 6;
    selectionSort(arr,n);
    print(arr,n);
}
