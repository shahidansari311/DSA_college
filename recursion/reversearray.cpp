#include <iostream>
using namespace std;

void reverse(int arr[],int i,int j){
    if(i>=j) return;

    swap(arr[i],arr[j]);

    reverse(arr,i+1,j-1);
}

void reverseusingsingle(int arr[],int i,int n){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);

    reverseusingsingle(arr,i+1,n-1);
}

int main(){
    int arr[]={1,2,5,6,7,8};
    // reverse(arr,0,5);
    reverseusingsingle(arr,0,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}