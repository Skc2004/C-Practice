// Implementation of stack using array in C 

#include <stdio.h>
#include <stdlib.h>

int top=-1;
int stack[100];

void push(int element);
void pop();
void show();

int main()
{
    int choice,element;
    while(1)
    {
        printf("Enter the choice from the following operations of the Stack: \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Show \n");
        printf("4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                printf("Popping the topmost element.........\n");
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting the program.........");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }
}

void push(int element)
{
    if(top==99)
    {
        printf("Stack is full. Cannot push element.\n");
    }
    else
    {
        ++top;
        stack[top]=element;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("The Stack is Empty!!!\n");
    }
    else
    {
        printf("Popped element: %d\n",stack[top]);
        stack[top]=(int)NULL;
        top--;
    }
}

void show()
{
    if(top==-1)
    {
        printf("The Stack is Empty!!!\n");
    }
    else{
        printf("Stack elements are: \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}