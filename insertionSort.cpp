#include<iostream>
using namespace std;

int main()
{
     int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int a[n], temp,min_index,i,j;
    cout<<"enter the number for sorting: "<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
      for(i=0; i<n; i++)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
 cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}