#include <iostream>
using namespace std;
void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int temp;
    int pivot = arr[(left + right) / 2];
    /* partition */
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    };
    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}
int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int a[n], temp, min_index, i, j;
    cout << "enter the number for sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}