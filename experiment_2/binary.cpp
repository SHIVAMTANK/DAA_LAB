#include<iostream>
#include<time.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) 
{ 
   
    if (high >= low) { 
        
        int mid = low + (high - low) / 2; 
  
     
        if (arr[mid] == x) 
            return mid; 
  
       
        if (arr[mid] > x) 
        return binarySearch(arr, low, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, high, x); 
    } 

    return -1; 
} 
int main()
{


    int x = 564;
    int n =1000;
    int a[n];
    for(int i = 0;i<n;i++){
        a[i] = i;
    }
    clock_t t = clock();
    int result = binarySearch(a,0, n, x);
 
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;
    return 0;
}