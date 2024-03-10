#include <iostream>
#include<time.h>
using namespace std;
int partition(int *arr, int s, int e)
{

    int pivot = arr[s];

    // conting
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            cnt++;
    }

    int pivotindex = s + cnt;
    // place pivot index to his rigth place
    swap(arr[pivotindex], arr[s]);

    // swaping
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotindex && j > pivotindex)
            swap(arr[i++], arr[j--]);
    }

    return pivotindex;
}

void quickshort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    
    int p = partition(arr, s, e);

    quickshort(arr, s, p - 1);
    quickshort(arr, p + 1, e);
}
int main()
{
    int n = 1000;
    int arr[n] ;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    clock_t t = clock();
    quickshort(arr, 0, n - 1);
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout<<time_taken;

    return 0;
}