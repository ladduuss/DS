#include <stdio.h>

#define MAX 5  // Maximum capacity of the stack

int stack[MAX]; // Array declaration for the stack
int top = -1;   // Initializing top to -1 indicates an empty stack

// Function to add an element to the stack
void push(int value) {
    // Step 1: Check if the stack is already full (Stack Overflow)
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d.\n", value);
    } 
    // Step 2: If not full, increment top and insert the value
    else {
        top++;
        stack[top] = value;
        printf("Successfully pushed %d onto the stack.\n", value);
    }
}

// Function to display the current elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Current Stack (Top to Bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    // Demonstrating the push operation
    push(10);
    push(20);
    push(30);
    
    // Displaying current elements
    display();
    
    // Pushing more elements to trigger the maximum limit
    push(40);
    push(50);
    
    // This push will trigger a Stack Overflow
    push(60); 
    
    // Final display of the complete stack
    display();

    return 0;
}
