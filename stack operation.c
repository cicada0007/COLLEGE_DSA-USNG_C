

/* 
C program to implement stack. 
Stack is a LIFO data structur
Stack operations: PUSH(insert operation), POP(Delete operatio
and Display stac
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top= -1,stack[MAX],ele,a,i;

void push();
int pop();
void display();

int main(){
    int choice;

    while (1){
        
        printf("-------    MENU     ------------");
        printf("1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT \n\nENTER THE CHOICE");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("INVALID INPUT")
            break;
        }
    }

    return 0;
}

void push(){

    if(top==MAX-1){
        printf("STACK HAS BEEN OVERFLOWED");
    }
    else{
        scanf("%d",&ele);
        top=top+1;
        stack[top]=ele;
    }
}

int display (){
    
    if(top == -1){
        print("STACK HAS NO ELEMENT");

    }
    else{   
        
        for(i=top;i>0;i--){
            printf("%d",stack[i]);
        }
    }
}
