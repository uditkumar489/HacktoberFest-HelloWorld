#include <iostream>

using namespace std;

int main(){
	
	int a1=0,a2=1,an,n;
	cout<<"Enter Number of Terms you want to Display (>2)\n";
	cin>>n;

	int i;
	cout<<a1<<","<<a2<<",";				//Printing First 2 Elements
	
	for(i=0;i<n-2;i++){
		an=a1+a2;
		a1=a2;
		a2=an;
		cout<<an<<",";
	}

	return 0;
}
