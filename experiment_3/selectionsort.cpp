#include<iostream>
#include<time.h>
using namespace std;

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 

    for (i = 0; i < n - 1; i++) {  
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
    } 
} 
  
// Function to print an array 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
        cout << endl; 
    } 
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
    selectionSort(a,n);
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;
    printArray(a,n);
    return 0;
}