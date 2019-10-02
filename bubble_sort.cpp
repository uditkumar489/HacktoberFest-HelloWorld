#include<iostream>
using namespace std;

void swap(int* arr, int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void bs(int* arr, int size, int jc, int bp){
    if(jc==size){
        return;
    }
    
    if(bp==size-jc){
        bs(arr, size, jc+1, 0);
        return;
    }
    
    if(arr[bp]>arr[bp+1]){
        swap(arr,bp,bp+1);
    }
    bs(arr, size, jc, bp+1);
}

int main(){

    int arr[] = {9,4,1,5,6};
    bs(arr,5,1,0);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;

}
