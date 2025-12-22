#include <stdio.h>

void merge(int arr[],int l,int m,int r){
    int temp[100];
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=m){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }

    for(i=l,k=0;i<=r;i++){
        arr[l]=temp[k++];
    }
}

void mergesort(int arr[],int left,int right){
    if(left<=right){
        int mid=(left+right)/2;

        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}

int main(){
    int arr[]={4,3,12,2,5,8,2,14};
    mergesort(arr,0,8);
    for(int x:arr){
        
    }
    return 0;
}