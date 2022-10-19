#include<stdio.h>
#define max 4
int stack[max];
int top = 0;
int i;

void push(int x){
    if(top <= max-1){
        top = top+1;
        stack[top] = x;
        printf("Data Push\n");
    }
    else{
        printf("Exception ! No Space\n");
    }
}
int pop(){
    if(top > 0){
       int val = stack[top];
       top = top - 1;
       printf("Data remove\n");
       return val;
    }
    else{
        printf("Exception ! from pop Empty Stack");
        return 0;
    }

}

//int peek(){
//    if(top > 0){
//        return stack[top];
//    }
//    else{
//        printf("Exception from peek! Empty Stack\n");
//        return 0;
//    }
//
//}

int main(){
    printf("Implementing my stack in c.\n");
//    peek();
//    push(1);
//    push(2);
//    push(3);
//    push(4);
//    printf("Top of stack %d\n",peek());

    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();

    for(i=top; i>=1; i--){
        printf("%d\n",stack[i]);
    }





    return 0;
}

