// Including necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining a structure Job to store information about job
typedef struct Job {
    int jobId;
    char jobName[50];
    struct Job* next;
} Job;

// Defining a structure Queue for the implementation of the scheduling
typedef struct Queue {
    Job* front;
    Job* rear;
} Queue;

// Function to create a Queue
Job* createJob(int id, char* name) {
    Job* newJob = (Job*)malloc(sizeof(Job));
    newJob->jobId = id;
    strcpy(newJob->jobName, name);
    newJob->next = NULL;
    return newJob;
}

// Function to intialize the formed queue
void initializeQueue(Queue* q) {
    q->front = q->rear = NULL;
}

// Function to check if the Queue is Empty
int isEmpty(Queue* q) {
    return q->front == NULL;
}


// Function to insert a new job using enqueue operation
void enqueue(Queue* q, int id, char* name) {
    Job* newJob = createJob(id, name);
    if (q->rear == NULL) {
        q->front = q->rear = newJob;
    } else {
        q->rear->next = newJob;
        q->rear = newJob;
    }
    printf("Job added to the queue: %d - %s\n", id, name);
}

// Function to remove a job using dequeue operation
void dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty, no job to process.\n");
        exit(1);
    }
    Job* temp = q->front;
    printf("Processing job: %d - %s\n", temp->jobId, temp->jobName);
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

// Function to display the queue along with values stored in it.
void displayQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("The queue is empty.\n");
        exit(1);
    }
    Job* temp = q->front;
    printf("Current jobs in the queue:\n");
    while (temp != NULL) {
        printf("Job ID: %d, Job Name: %s\n", temp->jobId, temp->jobName);
        temp = temp->next;
    }
}

// Main Function to perform the operations 
int main() {
    Queue jobQueue;
    initializeQueue(&jobQueue);

    int choice, jobId;
    char jobName[50];
    // Defining the menu
    printf("\nJob Scheduling using Queue (Linked List)\n");
    printf("1. Add Job (Enqueue)\n");
    printf("2. Process Job (Dequeue)\n");
    printf("3. Display Jobs\n");
    printf("4. Exit\n");
    
    // Forming a loop which only exits when the user chooses exit option
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Switch statement to process the request of User
        switch (choice) 
        {
            case 1:
            // Adding a job 
                printf("Enter Job ID: ");
                scanf("%d", &jobId);
                printf("Enter Job Name: ");
                scanf("%s", jobName);
                enqueue(&jobQueue, jobId, jobName);
                break;
            case 2:
            // Removing a job
                dequeue(&jobQueue);
                break;
            case 3:
            // Displaying all the jobs
                displayQueue(&jobQueue);
                break;
            case 4:
            // Exiting the program 
                printf("Exiting...\n");
                exit(0);
            default:
            // Printing Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}