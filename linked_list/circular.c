//WAP to insert and delete programs in circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

typedef struct node ntype;
ntype *newnode,*head=NULL,*temp,*nextnode;
void insert_at_beg(int ele){
newnode=(ntype*)malloc(sizeof(ntype));
newnode->next=NULL;
newnode->data=ele;
if(head==NULL){
    head=newnode;
    head->next=head;
}
else{
    temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}

}
void delete_at_beg(){
    if(head==NULL){
        printf("Empty list");
    }else{
        temp=nextnode=head;
        while(nextnode->next!=head){
            nextnode=nextnode->next;
        }
        if(head==nextnode){
            head=nextnode=NULL;
        }else{
            head=head->next;
        nextnode->next=head;
        }
        printf("The deleted item is %d",temp->data);
        free(temp);
    }
}

void insert_at_end(int ele){
newnode=(ntype*)malloc(sizeof(ntype));
newnode->next=NULL;
newnode->data=ele;
if(head==NULL){
head=newnode;
newnode->next=head;
}
else{
temp=head;
while(temp->next!=head){
    temp=temp->next;
}
temp->next=newnode;
temp=newnode;
temp->next=head;
}
}
void del_at_end(){
    if(head==NULL){
        printf("Empty list\n");
    }else{
        temp=head;
        while(temp->next!=head){
                nextnode=temp;
            temp=temp->next;
        }
        if(temp==head){
            head=NULL;
        }else{
            nextnode->next=head;
        }
      printf("The deleted item is %d",temp->data);
        free(temp);
    }
}

void insert_at_pos(int ele){
    int i=1,pos;
newnode=(ntype*)malloc(sizeof(ntype));
newnode->data=ele;
if(head==NULL){
    head=newnode;
    newnode->next=head;
}
else{
printf("ENTer a position to enter\n");
scanf("%d",&pos);
if(pos==1){
temp=head;
newnode->next=head;
while(temp->next!=head){
    temp=temp->next;
}
head=newnode;
temp->next=head;
}else{
temp=head;
for(i;i<pos-1;i++){
temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}
printf("Inserted successfully\n");
}
}
void del_at_pos(){
    int pos,i=1;
    if(head==NULL){
        printf("Empty list");
    }else{
        temp=head;
        printf("Enter a position to delete the element\n");
        scanf("%d",&pos);
        if(pos==1){
            if(head->next==head){
                head=NULL;
            }else{
                nextnode=head;
                 while(nextnode->next!=head){
                    nextnode=nextnode->next;
                 }
                 head=head->next;
                 nextnode->next=head;
            }
        }else{
            for(i;i<pos;i++){
                    nextnode=temp;
                temp=temp->next;
            }
            nextnode->next=temp->next;
        }
        printf("THe deleted item is %d",temp->data);
        free(temp);
    }
}


void display(){
if(head==NULL){
    printf("EMpty list\n");
}
else{
temp=head;
while(temp->next!=head){
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}
void main(){
int n,ele;
    printf("\n***Singly Circular Linked List***\n");
    for(;;){
        printf("\n1.Insert_at_beg\t2.insert_at_end\t3.insert at pos\t4.display\t5.delete_at_beg\t6.delete_at_endd\t7.delete_at_pos\t8.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert_at_beg(ele);
                    break;
            case 2: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert_at_end(ele);
                    break;
            case 3: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert_at_pos(ele);
                    break;
            case 4: display();
                    break;
            case 5: delete_at_beg();
                     break;
            case 6: del_at_end();
                     break;
            case 7: del_at_pos();
                     break;
            case 8: exit(0);
                     break;
            default:
                    printf("\nInvalid choice\n");
        }
}
}
