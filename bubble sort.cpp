#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
void bubblesort(int[],int);
int main()
{
    int a[30];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"the sorted array is";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<(n-1);j++)
        {
            if(a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        cout<<"array after every pass";
        for (int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}


