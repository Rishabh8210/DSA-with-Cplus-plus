#include<iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // int *first = new int[len1];
    // int *second = new int[len2];
    int first[len1];
    int second[len2];

    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
        // first[i] = arr[mainArrayIndex];
        // mainArrayIndex++;
    }
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
        // second[i] = arr[mainArrayIndex];
        // mainArrayIndex++;
    }
    
    //Merge2 sorted array ka concept hai 
    int ind1 = 0;
    int ind2 = 0;
    mainArrayIndex = s;
    while(ind1 < len1 && ind2 < len2)
    {
        if(first[ind1] < second[ind2])
        {
            arr[mainArrayIndex++] = first[ind1++];
        }
        else{
            arr[mainArrayIndex++] = second[ind2++];
        }
    }
    while(ind1 < len1)
    {
        arr[mainArrayIndex++] = first[ind1++];
    }
    while(ind2 < len2)
    {
        arr[mainArrayIndex++] = second[ind2++];
    }
    // delete []first;
    // delete []second;
}
void mergeSort(int *arr,int s, int e)
{
    if(s == e)
    {
        return;
    }


    int mid = (s + e) / 2;

    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
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
    int arr[] = {10,3,7,19,2};
    int n = 5;
    mergeSort(arr,0,n-1);
    print(arr,n);
}