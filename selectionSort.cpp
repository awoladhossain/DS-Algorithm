#include <iostream>
using namespace std;

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
    for (i = 0; i < n; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}