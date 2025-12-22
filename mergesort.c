#include <stdio.h>

void mergesort(int arr[],int n){
    if (n < 2) return;
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    for (int i = 0; i < mid; ++i) left[i] = arr[i];
    for (int i = mid; i < n; ++i) right[i - mid] = arr[i];
    mergesort(left, mid);
    mergesort(right, n - mid);
    int i = 0, j = 0, k = 0;
    while (i < mid && j < n - mid) {
        if (left[i] <= right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }
    while (i < mid) arr[k++] = left[i++];
    while (j < n - mid) arr[k++] = right[j++];
}

int main(){
    int n;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}