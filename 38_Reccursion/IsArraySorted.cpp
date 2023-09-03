#include <iostream>
#include <string>
using namespace std;

// bool isArraySorted(int arr[],int n){
//     if(n == 0){
//         return true;
//     }
//     if(arr[n]>=arr[n-1] && isArraySorted(arr,n-1)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// bool isArraySorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     return arr[0]<=arr[1] && isArraySorted(arr+1,n-1);
// }

// my code
bool isArraySorted(int arr[], int firstIndex, int n)
{
    if (firstIndex == n)
    {
        return true;
    }
    bool restOfArray = isArraySorted(arr, firstIndex + 1, n);
    return (arr[firstIndex] <= arr[firstIndex + 1] && restOfArray);
}
// int main()
// {
//     int arr1[] = {1,2,3,6,7,8,9};
//     int arr2[] = {1,2,3,6,4,8,9};
//     cout<<isArraySorted(arr2,0,7)<<endl;
//     return 0;
// }

void ascendingOrder(int n)
{
    // first which cout will be called? inner fun's or outer fun's
    // here inner fun's cout will be called first and then outer fun's cout
    if (n == 0)
    {
        return;
    }
    ascendingOrder(n - 1);
    cout << n << " ";
}

void descendingOrded(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    descendingOrded(n - 1);
}

int firstOccuranceOfElement(int arr[], int n, int key, int index)
{
    if (index == n)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    return firstOccuranceOfElement(arr, n, index + 1, key);
}

// int lastOccuranceOfElement(int arr[],int n,int value){
//     if(arr[n-1]==value){
//         return n-1;
//     }
//     return lastOccuranceOfElement(arr,n-1,value);
// }

int lastOccuranceOfElement(int arr[], int n, int key)
{
    if (n == -1)
    {
        return -1;
    }
    if (arr[n] == key)
    {
        return n;
    }
    return lastOccuranceOfElement(arr, n - 1, key);
}

int main()
{
#ifndef ONLINE_SHIELD
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << isArraySorted(arr, 0, 7) << endl;
    descendingOrded(10);
    cout << endl;
    ascendingOrder(10);
    cout << endl;
    int arr1[] = {1, 2, 3, 4, 5, 6, 2, 4, 5};
    cout << firstOccuranceOfElement(arr1, 9, 5, 0) << endl;
    cout << lastOccuranceOfElement(arr1, 9, 5) << endl;
    return 0;
}