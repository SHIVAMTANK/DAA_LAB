#include<iostream>
#include<time.h>
using namespace std;
int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int x = 374;
    int n =1000;
    int a[n];
    for(int i = 0;i<n;i++){
        a[i] = i;
    }
    int result = search(a, n, x);
    clock_t t = clock();
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;
    return 0;
}