//WAP to insert and delete node at the beginning of doubly circular linked list
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
if(head==NULL||tail==NULL){
head=tail=newnode;
newnode->next=newnode;
newnode->prev=newnode;
}
else{
newnode->next=head;
head->prev=newnode;
newnode->prev=tail;
tail->next=newnode;
head=newnode;
}
}

void del(){
    if(head==NULL||tail==NULL){
        printf("EMpty list");
    }
else{
    if(head==tail){
        printf("THe deleted item is %d\n",head->info);
        head=NULL;
        tail==NULL;
    }else{
        temp=head;
        head=head->next;
        head->prev=tail;
        tail->next=head;
        printf("The deleted item is %d",temp->info);
        free(temp);
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
    printf("\n***Doubly Circular linked list**\n");
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

