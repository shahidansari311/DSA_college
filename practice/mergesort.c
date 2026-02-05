#include <stdio.h>

void merge(int arr[],int s,int mid,int n){
    int i=s,j=mid+1,k=0;
    int ans[n-s+1];
    for (int i = 0; i < n-s+1; i++)
    {
        ans[i]=0;
    }
    
    while(i<=mid && j<=n){
        if(arr[i]<arr[j]){
            ans[k++]=arr[i++];
        }
        else{
            ans[k++]=arr[j++];
        }

    }
    while(i <= mid){
       ans[k++]=arr[i++]; 
    }
    while(j <= n){
       ans[k++]=arr[j++]; 
    }
    for(int i=0;i<n-s+1;i++){
        arr[s+i]=ans[i];
    }
}

void mergesort(int arr[],int s,int n){
    if(s>=n) return;
    int mid=(s+n)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,n);
    merge(arr,s,mid,n);
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
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}