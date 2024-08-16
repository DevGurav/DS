#include <stdio.h>
#include <conio.h>
#define MAX 5  // Define the maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return (front == (rear + 1) % MAX);
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (isEmpty()) {
            front = 0;  // Initialize front if it's the first element
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;
    } else {
        int value = queue[front];
        if (front == rear) {
            // Queue becomes empty after this dequeue
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
        printf("%d dequeued from queue\n", value);
        return value;
    }
}

// Function to display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while(1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2: 
                dequeue();
                break;
            case 3: 
                display();
                break;
            case 4: 
                printf("Exiting...\n");
                return 0;
            default: 
                printf("Invalid choice! Please choose again.\n");
        }
    }
    return 0;
}
