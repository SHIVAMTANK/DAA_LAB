#include<iostream>
#include<time.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

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
    insertionSort(a,n);
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;
    printArray(a,n);
    return 0;
}