#include<iostream>
#include<cstring>
#include<cctype>
#include<climits>
#include<cmath>
using namespace std;

// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int input[], int size, int element) {
    // Write your code here


    if (size==0) return -1;
    if (size==1) 
    {
        if (input[0]==element) return 0;
        else return -1;
    }
    if (size==2) 
    {
        if (input[1]==element) return 1;
        else return -1;
    }

    int mid = (size-1)/2;

    if (element==input[mid]) return mid;
    else if(element>input[mid]) 
    {
        int index = binarySearch(input + mid,size-mid,element);
        if (index==-1) return -1;
        else return index + mid;
    }
    else 
    {
        if (size%2==0)
        {
            int index = binarySearch(input , size - mid -2,element);
            if (index==-1) return -1;
            else return index;
        }
        else
        {
            int index = binarySearch(input , size - mid -1,element);
            if (index==-1) return -1;
            else return index;
        }
    }
    


}

int main()
{
    //int a[50]={2,5,6,9,12,24,57,86,90};
    //int n= 9;
   // int a[]={1,2};
   // int n =2;
    
    int a[500];
    int n;
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];

    //for (int i=0;i<n;i++)
      //  cout << a[i] << " ";
    cout << endl;
    int x;
    cin >> x;
    cout << binarySearch(a,n,x) << endl;
}
