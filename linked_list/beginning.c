//WAP to insert and delete the program at the beginning of single linked list
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


void del(){
    if(head==NULL){

        printf("\nEMpty list\n");
    }
    else{
        temp=head;
        head=head->next;
        printf("ITem removed is %d",temp->data);
        free(temp);
    }

}
void display(){
    temp=head;
    if(head==NULL){
        printf("Empty list\n");
    }else{
         while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    }


}
int main(){
    int n,ele;
    for(;;){
        printf("\n***Single linked list**\n");
        printf("\n1.Insert\t2.Delete\t3.display\t4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert(ele);
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:
                    printf("\nInvalid choice\n");
        }
    }


}
