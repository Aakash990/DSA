/*WAP to allocate memory for n data items using calloc() function and display it. After
allocation find maximum and minimum numbers display it. Release memory after printing
sum.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0,max,min;
    int*ptr;
    printf("Enter the no of digit to be entered\n");
    scanf("%d",&n);
    //allocating memory using calloc
    ptr=(int*)calloc(n,sizeof(int));
    //storing the data items
    printf("Enter the data items\n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    //displaying the data items
    printf("The data items are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    max=ptr[0];
    min=ptr[0];
    for(i=0;i<n;i++){
        if(max<ptr[i]){
            max=ptr[i];
        }
        if(min>ptr[i]){
            min=ptr[i];
        }
        sum+=ptr[i];
    }
    printf("\nThe maximum and minimum no in the data items are %d and %d respectively\n",max,min);

    printf("THe sum is %d",sum);
    free(ptr);
    return 0;
}
