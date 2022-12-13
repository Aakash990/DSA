/*WAP to allocate memory for n data items using malloc() function and display it. After
allocation find sum of all data items and display sum. Release memory after printing sum*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    int* ptr;
    printf("Enter the number of digit to be entered\n");
    scanf("%d",&n);
    //allocating the memory
    ptr= (int*)malloc(n*sizeof(int));
    //storing data items
    printf("Enter the data items\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);

    }
    //displaying the data items
    printf("The data items are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    //finding the sum
    for(i=0;i<n;i++){
        sum+=ptr[i];
    }
    printf("\nThe sum is %d",sum);
    //deallocating the memory
    free(ptr);
    return 0;

}

