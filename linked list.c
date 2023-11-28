#include<stdio.h>
#include<stdlib.h>
int val,n;
int choice=1;

void main(){
struct node{
int data;
struct node* next;
};
struct node *head, *temp;
head=0;
while(choice==1){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data to be entered in the node\n");
scanf("%d",&val);
newnode->data=val;
newnode->next=0;
if(head==0){
head=temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("Do you want to enter another value: 1/0 ");
scanf("%d",&choice);
}

printf("The given linked list contains: \n");
temp=head;
while(temp!=0){
printf("%d",temp->data);
temp=temp->next;
}
}