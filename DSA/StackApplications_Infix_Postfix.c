// Stack applications infix to postfix conversion and postfix evaluation.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char x) {
    if(top==MAX-1)
    {
        printf("Stack is Full !!!");
    }
    else
    {
        stack[++top] = x;
    }
}

char pop() {
    if(top==-1)
    {
        printf("Stack is Empty !!!");
    }
    else
    {
        return stack[top--];
    }
}

int precedence(char x) {
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    int i, j = 0;
    for(i = 0; i < strlen(infix); i++) {
        if(infix[i] == ' ' || infix[i] == '(')
            continue;
        else if(infix[i] == ')') {
            while(stack[top] != '(')
                postfix[j++] = pop();
            pop(); // Remove the '('
        }
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/') {
            while(top != -1 && stack[top] != '(' && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
        else {
            postfix[j++] = infix[i];
        }
    }
    while(top != -1)
        postfix[j++] = pop();
    postfix[j] = '\0';
}

int evaluatePostfix(char postfix[]) {
    int i, x, y;
    for(i = 0; i < strlen(postfix); i++) {
        if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/') {
            y = pop() - '0';
            x = pop() - '0';
            switch(postfix[i]) {
                case '+':
                    push(x + y + '0');
                    break;
                case '-':
                    push(x - y + '0');
                    break;
                case '*':
                    push(x * y + '0');
                    break;
                case '/':
                    push(x / y + '0');
                    break;
            }
        }
        else
            push(postfix[i]);
    }
    return pop() - '0';
}

int main() {
    char infix[50], postfix[50];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    printf("Result: %d\n", evaluatePostfix(postfix));
    return 0;
}









































































































































































































/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// Function to check if the stack is empty
int isEmpty(char stack[], int *top) {
    if(top==-1)
    {
        return 1;
    }
}

// Function to check if the stack is full
int isFull(char stack[], int *top) {
    if(top== MAX_SIZE-1)
    {
        return 1;
    }
}

// Function to push an element onto the stack
void push(char stack[], int *top, char element) {
    if (isFull(stack, *top)) {
        printf("Stack is full. Cannot push %c\n", element);
        return;
    }
    stack[++(*top)] = element;
}

// Function to pop an element from the stack
char pop(char stack[], int *top) {
    if (isEmpty(stack, *top)) {
        printf("Stack is empty. Cannot pop\n");
        return '\0';
    }
    return stack[(*top)--];
}

// Function to get the top element of the stack
char peek(char stack[], int top) {
    if (isEmpty(stack, top)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return stack[top];
}

// Function to evaluate the precedence of an operator
int precedence(char operator) {
    if (operator == '+' || operator == '-') {
        return 1;
    } else if (operator == '*' || operator == '/') {
        return 2;
    } else if (operator == '^') {
        return 3;
    }
    return 0;
}

// Function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int top = -1;
    char stack[MAX_SIZE];
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (infix[i] == ' ' || infix[i] == '\t') {
            i++;
            continue;
        }

        if (isdigit(infix[i]) || isalpha(infix[i])) {
            postfix[j++] = infix[i++];
        } else if (infix[i] == '(') {
            push(stack, &top, infix[i++]);
        } else if (infix[i] == ')') {
            while (peek(stack, top) != '(') {
                postfix[j++] = pop(stack, &top);
            }
            pop(stack, &top); // Remove '('
            i++;
        } else {
            while (!isEmpty(stack, top) && precedence(infix[i]) <= precedence(peek(stack, top))) {
                postfix[j++] = pop(stack, &top);
            }
            push(stack, &top, infix[i++]);
        }
    }

    while (!isEmpty(stack, top)) {
        postfix[j++] = pop(stack, &top);
    }
    postfix[j] = '\0';
}

// Function to evaluate postfix expression
int evaluatePostfix(char postfix[]) {
    int top = -1;
    int stack[MAX_SIZE];
    int i = 0;

    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(stack, &top, postfix[i] - '0');
        } else {
            int operand2 = pop(stack, &top);
            int operand1 = pop(stack, &top);
            switch (postfix[i]) {
                case '+':
                    push(stack, &top, operand1 + operand2);
                    break;
                case '-':
                    push(stack, &top, operand1 - operand2);
                    break;
                case '*':
                    push(stack, &top, operand1 * operand2);
                    break;
                case '/':
                    push(stack, &top, operand1 / operand2);
                    break;
            }
        }
        i++;
    }
    return pop(stack, &top);
}

int main() {
    char infix[100], postfix[100];
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strlen(infix) - 1] = '\0'; // Remove newline character

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}

*/