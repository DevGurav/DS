#include <stdio.h>
#include <conio.h>
#define MAX 5  // Define the maximum size of the stack

int stack[MAX];
int top = -1;

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    } else {
        printf("%d popped from stack\n", stack[top]);
        return stack[top--];
    }
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Function to display the stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;
    while(1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2: 
                pop();
                break;
            case 3: 
                value = peek();
                if (value != -1)
                    printf("Top element is %d\n", value);
                break;
            case 4: 
                display();
                break;
            case 5: 
                printf("Exiting...\n");
                return 0;
            default: 
                printf("Invalid choice! Please choose again.\n");
        }
    }
    return 0;
}
