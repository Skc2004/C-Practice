#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Job {
    int jobId;
    char jobName[50];
    struct Job* next;
} Job;

typedef struct Queue {
    Job* front;
    Job* rear;
} Queue;

Job* createJob(int id, char* name) {
    Job* newJob = (Job*)malloc(sizeof(Job));
    newJob->jobId = id;
    strcpy(newJob->jobName, name);
    newJob->next = NULL;
    return newJob;
}

void initializeQueue(Queue* q) {
    q->front = q->rear = NULL;
}

int isEmpty(Queue* q) {
    return q->front == NULL;
}

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

int main() {
    Queue jobQueue;
    initializeQueue(&jobQueue);

    int choice, jobId;
    char jobName[50];
    printf("\nJob Scheduling using Queue (Linked List)\n");
    printf("1. Add Job (Enqueue)\n");
    printf("2. Process Job (Dequeue)\n");
    printf("3. Display Jobs\n");
    printf("4. Exit\n");
    
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Job ID: ");
                scanf("%d", &jobId);
                printf("Enter Job Name: ");
                scanf("%s", jobName);
                enqueue(&jobQueue, jobId, jobName);
                break;
            case 2:
                dequeue(&jobQueue);
                break;
            case 3:
                displayQueue(&jobQueue);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}