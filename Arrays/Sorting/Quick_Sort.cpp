#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int s,int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        swap(arr[i],arr[j]);
    } 
    return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    if(s >= e)
    return;

    int p = partition(arr,s,e);
    quickSort(arr,0,p-1);
    quickSort(arr,p+1,e);
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
    int arr[] = {10,3,7,1,9};
    int n = 5;
    quickSort(arr,0,n-1);
    print(arr,n);
}