//WAP to implement different queue operation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
typedef struct node ntype;
ntype *newnode,*rear=NULL,*front=NULL,*temp;

void insert(int item){
newnode=(ntype*)malloc(sizeof(ntype));
newnode->data=item;
if(rear==NULL){
rear=front=newnode;
newnode->next=NULL;
}
else{
newnode->next=NULL;
rear->next=newnode;
rear=newnode;
}
}

void delete(){
if(front==NULL){
printf("Queue contain no element");
return;
}else if(front->next==NULL){
temp=front;
rear=front=NULL;
printf("THe deleted item is %d\n",temp->data);
free(temp);
}
else{
temp=front;
front=front->next;
printf("The deleted item is %d\n",temp->data);
free(temp);
}
}
void display(){
    temp=front;
    if(front==NULL){
        printf("No element in stack\n");
    }else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int n,ele;
    printf("\n***Queue**\n");
    for(;;){

        printf("\n1.insert\t2.delete\t3.display\t4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    insert(ele);
                    break;
            case 2: delete();
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
