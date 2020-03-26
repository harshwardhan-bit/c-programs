#include<stdio.h>
#include<stdlib.h>
#define max 100

//global declaration of functions
void push(num);
void pop();
void show();

int top = -1;

int main()
{
    do{
    int i,num,ch;
    printf("\nEnter\t 1-Push element in stack");
    printf("\nEnter\t 2-Pop element in stack");
    printf("\nEnter\t 3-show element in stack");
    printf("\nEnter\t 4-exit");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:{
        printf("Enter item to add in stack");
        scanf("%d",&num);
        push(num);
        break;
    }
    case 2:
        {
            pop();
            break;
        }
    case 3:
        {
            show();
            break;

        }
    case 4:
        exit(0);
    default:
        printf("Enter a valid option");
    }

    }while(1);
    //function for push element
    void push(int num)
    {
        if(top == max-1)
        {
            printf("Stack is Full you can't insert element");
        }
        top++;
        stack[top] = num;
    }
    //function to pop element into stack
    void pop()
    {
        int num;
        if(top == -1)
        {
            printf("stack is already empty");
            return;
        }
        num = stack[top];
        printf("item is popped %d",num);
        top--;
    }
    //function to show elements in the stack
    void show()
    {
        int i,ptr=top;
        if(ptr == 1)
        {
            printf("empty stack");
            return;
        }
        while(ptr != -1)
        {
            printf("%d",stack[ptr]);
            ptr--;
        }
    }
    return(0);
}
