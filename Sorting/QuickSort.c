//WAP to show Quick sort
#include <stdio.h>

int arr[]={7,6,10,5,9,2,1,15,7};

int n=sizeof(arr)/4;

int partition(int start, int end){
    int pivot=start;
    int temp;
    while(start<end){
        while(arr[start]<=arr[pivot]){
            start++;
        }
        while (arr[end]>arr[pivot]) {
            end--;
        }
        if(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    temp=arr[pivot];
    arr[pivot]=arr[end];
    arr[end]=temp;
    return end;
}

void quickSort(int start, int end){
    if(start<end){
        int pivot=partition(start,end);
        quickSort(start,pivot-1);
        quickSort(pivot+1, end);
    }
}

int main(){
    quickSort(0,n-1);
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
