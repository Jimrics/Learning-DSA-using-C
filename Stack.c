#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ch=1;
struct stack{
	int data;
	struct stack* next;
};
struct stack* top=0;
struct stack* temp=0;

void push() {
    while (ch == 1) {
        struct stack* newnode = (struct stack*)malloc(sizeof(struct stack));
        printf("Enter the value to be pushed into the stack: ");
        scanf("%d", &newnode->data);
        newnode->next = top;
        top = newnode;
        printf("Do you want to insert more 1/0: ");
        scanf("%d", &ch);
    }
}


void display(){
	printf("Displaying the stack elements\n");
	temp=top;
	while(temp!=0){
		printf("%d",temp->data);
		printf(" ");
		temp=temp->next;
	}
}

void peek(){
	printf("The first element is: ");
	printf("%d",top->data);
}

void pop(){
	printf("\nPoping the first element\n");
	printf("The first element: ");
	printf("%d",top->data);
	top=top->next;
}

void main(){
	printf("Stack implementation using c\n");
push();
display();
peek();
pop();
display();	
}