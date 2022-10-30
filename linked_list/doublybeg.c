//WAP to insert and delete node at beginning of doubly linked list
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
newnode=(ntype*)malloc(sizeof(ntype));
newnode->next=NULL;
newnode->prev=NULL;
newnode->info=ele;
if(head==NULL){
head=newnode;
}else{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}
void del(){
    if(head==NULL){
        printf("EMpty list");
    }
else{
    temp=head;
head=head->next;
if(head!=NULL){
    head->prev=NULL;
}

printf("The deleted item is %d\n",temp->info);
free(temp);

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
       printf("\n*** Doubly linked list**\n");
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
