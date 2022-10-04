//WAP to insert and delete a node at specified position of doubly circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
struct node *prev;
}*newnode,*head=NULL,*tail=NULL,*temp;


void insert(int ele){
newnode=(struct node*)malloc(sizeof(struct node));
newnode->info=ele;
int pos,i=1;
if(head==NULL||tail==NULL){
head=tail=newnode;
newnode->next=head;
newnode->prev=tail;
}else{
printf("ENter a position\n");
scanf("%d",&pos);
if(pos==1){
newnode->next=head;
newnode->prev=tail;
head=newnode;
tail->next=head;
}else{
temp=head;
for(;i<pos-1;i++){
temp=temp->next;
}
if(temp==tail){
tail=newnode;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next->prev=newnode;
temp->next=newnode;
}
}


}

void del(){
struct node*nextnode;
int pos,i=1;
    if(head==NULL||tail==NULL){
        printf("EMpty list");
    }
else{
printf("ENter a position to delete\n");
scanf("%d",&pos);
temp=head;
if(pos==1){
        if(head==tail){
                printf("THe deleted item is %d",head->info);
            head=NULL;
            tail=NULL;
          return;
        }
head=head->next;
head->prev=tail;
printf("The deleted item is%d",temp->info);
free(temp);
}else{
for(i;i<pos-1;i++){
temp=temp->next;
}
nextnode=temp->next;
if(nextnode==tail){
    tail=temp;
}
temp->next=nextnode->next;
nextnode->next->prev=temp;
printf("The deleted item is %d",nextnode->info);
free(nextnode);
}
}}

void display(){
if(head==NULL||tail==NULL){
    printf("EMpty list\n");
}
else{
temp=head;
while(temp!=tail){
printf("%d\t",temp->info);
temp=temp->next;
}
printf("%d",temp->info);
}
}

void main(){
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

