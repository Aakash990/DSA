//WAP to show shell sort
#include<stdio.h>
int main(){
int arr[]={23,29,15,31,7,9,5,2};
int n=sizeof(arr)/sizeof(int);//finding size of array
for(int gap=n/2;gap>=1;gap=gap/2){
for(int j=gap;j<n;j++){
for(int i=j-gap;i>=0;i=i-gap){
if(arr[i+gap]>arr[i]){
break;
}else{
int temp=arr[i+gap];
arr[i+gap]=arr[i];
arr[i]=temp;
}
}
}
}
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}
}
