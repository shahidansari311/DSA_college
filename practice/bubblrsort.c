#include <stdio.h>

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
