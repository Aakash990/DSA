//WAP to insert and delete node at a specified position of doubly linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
struct node *prev;
};
typedef struct node ntype;
ntype *newnode,*head=NULL,*temp;
void insert(int ele){
int pos,i=1;
newnode=(ntype*)malloc(sizeof(ntype));
newnode->info=ele;
if(head==NULL){
    head=newnode;
    newnode->next=NULL;
    newnode->prev=NULL;
}
else{
    printf("ENter a position to enter\n");
scanf("%d",&pos);
if(pos==0){
newnode->prev=NULL;
newnode->next=head;
head->prev=newnode;
head=newnode;
}else{
temp=head;
for(i;i<pos;i++){
temp=temp->next;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
if(newnode->next!=NULL){
    newnode->next->prev=newnode;
}
}
printf("Inserted successfully\n");
}

}
void del(){
    int pos,i=1;
    struct node*nextnode;
    if(head==NULL){
        printf("\nEMpty list\n");
    }else{
    printf("Enter a position to delete\n");
    scanf("%d",&pos);

        if(pos==0){
                if(head->next!=NULL){
                        temp=head;
                     head=head->next;
                     head->prev=NULL;
                     printf("The deleted item is %d",temp->info);
                     free(temp);
                }
                else{
                printf("THe deleted item is %d\n",head->info);
                head=NULL;
                }

        }else{
            temp=head;
            for(i;i<=pos-1;i++){
                    temp=temp->next;

            }
            nextnode=temp->next;
            temp->next=nextnode->next;
            if(nextnode->next!=NULL){
                nextnode->next->prev=nextnode->prev;
            }
            printf("THe deleted item is %d",nextnode->info);
            free(nextnode);

        }

    }

}



void display(){
if(head==NULL){
    printf("EMpty list\n");
}
else{
temp=head;
while(temp!=NULL){
printf("%d\t",temp->info);
temp=temp->next;
}
}
}
int main(){
int n,ele;
    printf("\n***Doubly linked list***\n");
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
