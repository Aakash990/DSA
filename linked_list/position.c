//WAP to insert and delete the program at specified position of single linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*newnode,*head=NULL,*temp;
typedef struct node ntype;
//ntype *newnode,*head=NULL,*temp;
void insert(int ele){
int pos,i=1;

        newnode=(ntype*)malloc(sizeof(ntype));

        newnode->data=ele;
        if(head==NULL){
            head=newnode;
            newnode->next=NULL;
        }
        else{
            printf("Enter a position\n");
        scanf("%d",&pos);
        if(pos==0){
            newnode->next=head;
            head=newnode;
        }else{
             temp=head;
            for(i;i<pos;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;

        }

        }
        printf("Inserted successfully\n");
    }


void del(){
ntype*nextnode;
int pos,i=1;

if(head==NULL){
    printf("Empty list\n");
}else{
printf("Enter a position to delete\n");
scanf("%d",&pos);
    temp=head;
    if(pos==0){
        head=head->next;
        printf("THe deleted item is %d",temp->data);
        free(temp);

    }else{
        for(;i<=pos-1;i++){
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=temp->next->next;
    printf("THe deleted item is %d",nextnode->data);
    free(nextnode);
    }

}


}
void display(){
    temp=head;
    if(head==NULL){
        printf("Empty list\n");
    }else{
         while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    }


}
int main(){
    int n,ele;
      printf("\n***Single linked list**\n");
    for(;;){
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
