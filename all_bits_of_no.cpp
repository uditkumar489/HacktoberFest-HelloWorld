#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=31;i>=0;i--){
        int num=1<<i;
        if((n&num)==num){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    return 0;
}
