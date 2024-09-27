// Including necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Structure for the Queue
typedef struct 
{
    char items[MAX];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initQueue(Queue *q) 
{
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) 
{
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(Queue *q) 
{
    return q->rear == MAX - 1;
}

// Function to enqueue an element to the queue
void enqueue(Queue *q, char value) 
{
    if (isFull(q)) 
    {
        printf("Queue is full\n");
    } 
    else 
    {
        if (q->front == -1) 
        {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
    }
}

// Function to dequeue an element from the queue
char dequeue(Queue *q) 
{
    char item;
    if (isEmpty(q)) 
    {
        printf("Queue is empty\n");
        return '\0';
    } 
    else 
    {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) 
        {
            q->front = q->rear = -1;
        }
        return item;
    }
}

// Function to check operator precedence
int precedence(char ch) 
{
    switch (ch) 
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

// Function to check if the character is an operator
int isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// Function to convert infix expression to postfix using a queue
void infixToPostfix(char *infix, Queue *q) 
{
    char stack[MAX];
    int top = -1;
    int i, k = 0;
    char postfix[MAX];

    for (i = 0; infix[i] != '\0'; i++) 
    {
        char ch = infix[i];

        // If the character is an operand, enqueue it
        if (isalnum(ch)) 
        {
            postfix[k++] = ch;
        }
        // If the character is '(', push it onto the stack
        else if (ch == '(') 
        {
            stack[++top] = ch;
        }
        // If the character is ')', pop and enqueue until '(' is found
        else if (ch == ')') 
        {
            while (top != -1 && stack[top] != '(') 
            {
                postfix[k++] = stack[top--];
            }
            top--;  // Remove the '(' from the stack
        }
        // If the character is an operator
        else if (isOperator(ch)) 
        {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) 
            {
                postfix[k++] = stack[top--];
            }
            stack[++top] = ch;
        }
    }

    // Pop the remaining operators from the stack
    while (top != -1) 
    {
        postfix[k++] = stack[top--];
    }
    postfix[k] = '\0';  // Null-terminate the postfix expression

    // Enqueue the postfix expression
    for (i = 0; postfix[i] != '\0'; i++) 
    {
        enqueue(q, postfix[i]);
    }
}

// Function to display the postfix expression from the queue
void displayQueue(Queue *q) 
{
    if (isEmpty(q)) 
    {
        printf("Queue is empty\n");
    } 
    else 
    {
        printf("Postfix Expression: ");
        for (int i = q->front; i <= q->rear; i++) 
        {
            printf("%c", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    Queue q;
    initQueue(&q);
    
    char infix[MAX];
    
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    // Convert infix to postfix and store in queue
    infixToPostfix(infix, &q);

    // Display the postfix expression from the queue
    displayQueue(&q);

    return 0;
}