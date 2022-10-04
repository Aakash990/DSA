//WAP to implement different stack operation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
typedef struct node ntype;
ntype *newnode,*Top=NULL,*temp;

void PUSH(int item){
newnode=(ntype*)malloc(sizeof(ntype));
newnode->data=item;
if(Top==NULL){
Top=newnode;
newnode->next=NULL;
}
else{
newnode->next=Top;
Top=newnode;
}
printf("Item pushed onto the stack\n");
}

void POP(){
if(Top==NULL){
printf("Stack contain no element");
return;
}
else{
temp=Top;
Top=temp->next;
printf("The popped item is %d\n",temp->data);
free(temp);
}
}
void display(){
    temp=Top;
    if(Top==NULL){
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
    printf("\n***Stack**\n");
    for(;;){

        printf("\n1.push\t2.Pop\t3.display\t4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1: printf("\nEnter a element to insert\n");
                    scanf("%d",&ele);
                    PUSH(ele);
                    break;
            case 2: POP();
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
