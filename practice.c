#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;


void push(int x){
	if(top<CAPACITY-1){
		top = top+1;
		stack[top] = x;
		printf("added: %d\n",x);
	}
	else{
		printf("out of capacity\n");
	}
}

int pop(){
	if(top>=0){
		int value = stack[top];
		top = top-1;
		return value;
	}
	printf("Empty stack\n");
	return -1;
}


int peek(){
	if(top>=0){
		return stack[top];
	}
	else{
		printf("Empty stack\n");
		return -1;
	}
}
int main()
{
	peek();
	push(34);
	pop();
	push(4);
	push(345);
	push(134);
	printf("top item: %d\n",peek());
	return 0;
}

