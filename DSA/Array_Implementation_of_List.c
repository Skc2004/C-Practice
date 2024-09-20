#include <stdio.h>

#define MAX 100

typedef struct {
    int arr[MAX];
    int size;
} List;

// Function to create a list
void createList(List *list) {
    list->size = 0;
}

// Function to insert an element into the list
void insertElement(List *list, int element, int position) {
    if (position < 0 || position > list->size) {
        printf("Invalid position!\n");
        return;
    }
    if (list->size == MAX) {
        printf("List is full!\n");
        return;
    }
    for (int i = list->size; i > position; i--) {
        list->arr[i] = list->arr[i - 1];
    }
    list->arr[position] = element;
    list->size++;
}

// Function to delete an element from the list
void deleteElement(List *list, int position) {
    if (position < 0 || position >= list->size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < list->size - 1; i++) {
        list->arr[i] = list->arr[i + 1];
    }
    list->size--;
}

// Function to search for an element in the list
int searchElement(List *list, int element) {
    for (int i = 0; i < list->size; i++) {
        if (list->arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// Function to display the elements of the list
void displayList(List *list) {
    if (list->size == 0) {
        printf("List is empty!\n");
        return;
    }
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->arr[i]);
    }
    printf("\n");
}

int main() {
    List myList;
    createList(&myList);
    int choice, element, position, index;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert at (0 to %d): ", myList.size);
                scanf("%d", &position);
                insertElement(&myList, element, position);
                break;
            case 2:
                printf("Enter position to delete (0 to %d): ", myList.size - 1);
                scanf("%d", &position);
                deleteElement(&myList, position);
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                index = searchElement(&myList, element);
                if (index != -1) {
                    printf("Element %d found at index: %d\n", element, index);
                } else {
                    printf("Element %d not found!\n", element);
                }
                break;
            case 4:
                printf("Current List: ");
                displayList(&myList);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

