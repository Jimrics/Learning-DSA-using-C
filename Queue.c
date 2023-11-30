#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ch;
int val;
struct node{
	int data;
	struct node* next;
};
struct node* front;
struct node* rear;
struct node* temp;

void insert(){
	ch='Y';
	while(ch=='Y'){
	
	printf("Enter the value to be inserted in the queue: ");
	scanf("%d",&val);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(front==0 && rear==0){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
printf("Do you want to insert again:Y/N ");
scanf("%s",&ch);
}
}

void display() {
    printf("\nDisplaying the elements in the queue: ");
    temp = front;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void dequeue(){
	printf("Dequeing the first element\n");
	temp=front;
	front=front->next;
	free(temp);
	
}

void peek(){
	printf("\nThe first element in the queue is: ");
	printf("%d",front->data);
}
void main(){
printf("QUEUE\n");
insert();
display();
dequeue();
peek();
}