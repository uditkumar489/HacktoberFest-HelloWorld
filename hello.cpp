#include<iostream>
using namespace std;
int main()
{
    int i,j,n,s;

cout<<"Enter the no. of rows";
cin>>n;
for(i=1;i<=n;i++)
{
    for(s=0;s<=i;s++)
    cout<<" ";
    for(j=n-1;j>=0;j--)

     cout<<6-j;

    cout<<endl;
}

return 0;
}
