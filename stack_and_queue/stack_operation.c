#include<stdio.h>
#include<stdlib.h>
//initializing the size and top
const int size=100;
int top=-1;

void push(char* stack){
//check the stack is full or not 
	if (top==(size-1)){
		printf("Stack is Full !!! \n");
	}
//push operation in stack
	else{
		printf("Enter the item :: ");
		scanf(" %c", (stack+ top +1));
		top++;
	}
}

void pop(char* stack){
//check stack is empty or not 
	if (top== -1 ){
        printf("\n");
		printf("Stack is Empty !!!\n");
		printf("\n");
	}
//pop operation on stack
	else{
		printf("\n");
		printf("Popped element is :: %c", *(stack + top));
		top--;
	}

}

void show(char* stack){

	if (top==-1){
		printf("Nothing is in stack !!\n");
	}

	else{
		for (int i=0; i<=top;i++){
			printf(" %c", *(stack+i));
		}
		
	}
}

int main(){

	char stack[100];
	int choice =0;

	while (1){

        printf("\n\nPerform operations on the stack:\n");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice){

        case 1:
            push(stack);
            break;

        case 2:
            pop(stack);
            break;

        case 3:
            show(stack);
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
	return 0;
}