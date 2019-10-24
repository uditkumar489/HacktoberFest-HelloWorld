#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int t;

    for(int i=2;i<=n;i++){
            t=0;

        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                t=1;
            }

        }
        if(t==0){
            cout<<i<<" ";
        }


    }


    return 0;
}
