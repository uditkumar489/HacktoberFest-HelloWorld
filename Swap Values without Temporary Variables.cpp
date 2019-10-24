#include <iostream>

using namespace std;

int main(){
	
	int a,b;

	cout<<"Enter 1st Number\n";
	cin>>a;
	
	cout<<"Enter 2nd Number\n";
	cin>>b;

	cout<<"Numbers Before Swapping\n";
	cout<<a<<","<<b<<"\n";

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"Numbers After Swapping\n";
	cout<<a<<","<<b;
	
	return 0;
}
