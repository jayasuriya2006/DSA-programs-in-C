#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push element
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack is Full\n");
    } else {
        stack[++top] = value;
    }
}

// Pop element
void pop() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        top--;
    }
}
// Check if stack is full
bool isFull() {
    return top == MAX - 1;
}

// Check if stack is empty
bool isEmpty() {
    return top == -1;
}
// Peek top element
int peek() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

// Display stack
void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

    return 0;
}
