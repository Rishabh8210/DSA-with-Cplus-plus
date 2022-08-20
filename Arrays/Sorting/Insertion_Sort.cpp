#include<iostream>
using namespace std;
void insertionSort(int *arr,int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0)
        {
            
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}
void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    insertionSort(arr,n);
    print(arr,n);
}