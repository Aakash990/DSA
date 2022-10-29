//WAP to show merge sort
#include<stdio.h>
void mergesort(int arr[],int lb,int ub){
if(lb<ub){
int mid=(lb+ub)/2;
mergesort(arr,lb,mid);
mergesort(arr,mid+1,ub);
merge(arr,lb,mid,ub);
}}
void merge(int arr[],int lb,int mid,int ub){
int b[ub+1];
int i=lb;
int j=mid+1;
int k=lb;
while(i<=mid&&j<=ub){
if(arr[i]<=arr[j]){
b[k]=arr[i];
i++;
}
else{
b[k]=arr[j];
j++;
}
k++;
}
if(i>mid){
while(j<=ub){
b[k]=arr[j];
j++;
k++;
}
}else{
while(i<=mid){
b[k]=arr[i];
i++;
k++;
}
}
for(int i=lb;i<=ub;i++){
arr[i]=b[i];
}
}

int main(){
int arr[]={10,11,7,3,12,1,13,7,3,7};
int n=sizeof(arr)/4;
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}

}
