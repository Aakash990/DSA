//WAP to search element in linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node ntype;
ntype *newnode,*head=NULL,*temp;
void insert(int ele){

        newnode=(ntype*)malloc(sizeof(ntype));

        newnode->data=ele;
        newnode->next=head;
        head=newnode;
        printf("\nItem inserted\n");
    }



void search(){
    int ele,i=1;
    if(head==NULL){
        printf("Empty list\n");
    }else{
         printf("Enter a element to search\n");
    scanf("%d",&ele);
    temp=head;
    while(temp!=NULL){
        if(temp->data==ele){
            printf("element found at node %d\n",i);
            return;
        }
        temp=temp->next;
        i++;
    }
    printf("Element not found\n");
    }


}

int main(){
    int n,ele;
    for(;;){
        printf("\n***Single linked list**\n");
        printf("\n1.Insert\t2.search\t3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert(ele);
                    break;
            case 2: search();
                    break;
            case 3: exit(0);
                    break;
            default:
                    printf("\nInvalid choice\n");
        }
    }


}
