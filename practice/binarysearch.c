#include <stdio.h>

int binarysearch(int arr[],int n,int key){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) s=mid+1;
        else e=mid;
    }
    return -1;
}

int main(){
    int n;
    printf("Enter numbers of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter key to search : ");
    scanf("%d",&key);
    int a=binarysearch(arr,n,key);
    if(a!= -1){
        printf("Element found at %d index",a);
    }
    else{
        printf("Element not found");
    }
    return 0;
}