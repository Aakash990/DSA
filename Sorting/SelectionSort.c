//WAP to show selection sort
#include<stdio.h>
int main(){
    int arr[]={10,3,4,7,11,13,23,14};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++){
            int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;

            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
