#include<iostream>
using namespace std;
int main() {
    int N,rem;
    int i = 0,b = 1;
    cin>>N;
    while(N > 0 ){
        rem = N%10;
        i = i + rem*b;
        b *= 2;
        N = N/10;
    }
    cout<<i;

	return 0;
}