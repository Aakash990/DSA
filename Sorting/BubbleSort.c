//WAP to show bubble sorting
#include<stdio.h>
int main(){
int arr[]={10,3,4,7,11,13,23,14};
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n-1;i++){
int flag=0;
for(int j=0;j<n-1-i;j++){
if(arr[j]>arr[j+1]){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
flag=1;
}
}
if(flag==0){
break;
}
}
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}
}
