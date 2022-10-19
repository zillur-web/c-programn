#include<stdio.h>
#define size 4

int top=0, stack[size];
void push();
void pop();
void show();

int main(){
	int choice;
	while(1){
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n3.Pop the element\n2.Show\n4.End");
		printf("\nEnter the choice:");
		scanf("%d",&choice);

		if(choice == 1){
            push();
		}
		else if(choice == 2){
            show();
		}
		else if(choice == 3){
            pop();
		}
		else if(choice == 4){
            exit(0);
		}
		else{
            printf("\nInvalid choice!!");
		}
	}
	return 0;
}

void push(){
    int x;
	if(top <= size){
	    printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
	else{
		printf("\nOverflow!!");
	}
}

void pop(){
	if(top > 0){
        printf("\nPopped element:  %d",stack[top]);
        int val = stack[top];
		top=top-1;
	}
	else{
		printf("\nUnderflow!!");
	}
}

void show(){
	if(top > 0){
        printf("\nElements present in the stack: \n");
		for(int i=1; i<=top; i++){
            printf("%d ",stack[i]);
        }
	}
	else{
        printf("\nUnderflow!!");
	}
}
