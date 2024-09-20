#include <stdio.h>
#include <stdlib.h>

// Define the structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Function to push an element onto the stack
void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

// Function to display the elements of the stack
void display(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    while (top != NULL) {
        printf("%d\n", top->data);
        top = top->next;
    }
}

// Main function to take user input and manage stack operations
int main() {
    struct Node* stack = NULL;
    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1)
                    printf("Popped value: %d\n", value);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again\n");
        }
    }
    return 0;
}


// Algorithm
/*
Algorithm for Stack Using Linked List
1. Start
2. Define Node Structure
    A structure Node is defined with two fields:
        data to store the integer value.
        next to point to the next node in the stack.
3. Push Operation
    Input: Value to be pushed.
    Step 1: Create a new node.
    Step 2: If memory allocation fails, print "Heap overflow" and return.
    Step 3: Assign the input value to the data field of the new node.
    Step 4: Set the next of the new node to point to the current top of the stack.
    Step 5: Update the top of the stack to be the new node.
    Step 6: Print a message that the value has been pushed.
4. Pop Operation
    Input: None.
    Step 1: If the stack is empty (top is NULL), print "Stack underflow" and return -1.
    Step 2: Store the data of the current top node.
    Step 3: Update the top of the stack to the next node (i.e., top->next).
    Step 4: Free the memory of the popped node.
    Step 5: Return the popped value.
5. Display Operation
    Input: None.
    Step 1: If the stack is empty (top is NULL), print "Stack is empty" and return.
    Step 2: Traverse through the linked list starting from the top.
    Step 3: Print the data of each node until the end of the list (NULL) is reached.
6. Main Function
    Step 1: Initialize an empty stack (top = NULL).
    Step 2: Continuously prompt the user for an operation (push, pop, display, or exit) using a menu:
    Push: Ask for a value and call the push() function.
    Pop: Call the pop() function and display the popped value if valid.
    Display: Call the display() function to show the stack elements.
    Exit: Exit the loop and terminate the program.
    Step 3: If an invalid choice is entered, display an error message.
7. End
*/


// PseudoCode

/*
#### 1. **Define Node Structure**
   ```
   STRUCT Node
       DATA: integer
       NEXT: Node pointer
   ```

#### 2. **Push Operation**
   ```
   FUNCTION push(top, value):
       CREATE newNode
       IF newNode IS NULL THEN
           PRINT "Heap overflow"
           RETURN
       END IF
       
       newNode.DATA = value
       newNode.NEXT = top
       top = newNode
       PRINT value, "pushed to stack"
   END FUNCTION
   ```

#### 3. **Pop Operation**
   ```
   FUNCTION pop(top):
       IF top IS NULL THEN
           PRINT "Stack underflow"
           RETURN -1
       END IF
       
       poppedValue = top.DATA
       temp = top
       top = top.NEXT
       FREE temp
       RETURN poppedValue
   END FUNCTION
   ```

#### 4. **Display Operation**
   ```
   FUNCTION display(top):
       IF top IS NULL THEN
           PRINT "Stack is empty"
           RETURN
       END IF
       
       current = top
       WHILE current IS NOT NULL DO
           PRINT current.DATA
           current = current.NEXT
       END WHILE
   END FUNCTION
   ```

#### 5. **Main Program**
   ```
   FUNCTION main():
       DECLARE top AS NULL
       DECLARE choice, value

       WHILE TRUE DO
           PRINT "1. Push"
           PRINT "2. Pop"
           PRINT "3. Display"
           PRINT "4. Exit"
           PRINT "Enter your choice:"
           READ choice
           
           SWITCH choice:
               CASE 1:
                   PRINT "Enter value to push:"
                   READ value
                   CALL push(top, value)
               CASE 2:
                   result = CALL pop(top)
                   IF result != -1 THEN
                       PRINT "Popped value:", result
                   END IF
               CASE 3:
                   CALL display(top)
               CASE 4:
                   PRINT "Exiting..."
                   EXIT
               DEFAULT:
                   PRINT "Invalid choice, try again"
           END SWITCH
       END WHILE
   END FUNCTION
   ```
*/