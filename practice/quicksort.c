#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partion(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;

    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int pi=partion(arr,l,h);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
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
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}