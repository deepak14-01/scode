#include <iostream> 
using namespace std; 

int binarySearch(int arr[], int x, int l=0, int r=n-1) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearch(arr, x, l, mid - 1); 

        return binarySearch(arr, x, mid + 1, r); 
    } 
    return -1; 
} 

int main() 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr,x); 
    if (result == -1)
        cout << "Element not present in array";
    else
        cout << "Element present at index " << result; 
    return 0; 
} 
