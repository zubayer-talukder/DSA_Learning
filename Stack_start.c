#include <stdio.h>

#define CAPACITY 3

int Stack[CAPACITY];
int indx = 0;
void push(int x) {
    if (indx < CAPACITY) {  
        Stack[indx] = x;
        indx++;  
        printf("Successfully Added Item: %d\n", x);
    } else {
        printf("Exception!! Stack Overflow\n");
    }
}

int pop() {
    if (indx > 0) {  
        indx--;  
        int value = Stack[indx];
        return value;
    } else {
        printf("Exception from Pop!! Stack Underflow\n");
        //return -1;
    }
}

int peek() {
    if (indx > 0) {
        return Stack[indx - 1];  // Access top element
    } else {
        printf("Exception from Peek! Stack Underflow\n");
       // return -1;
    }
}

int main() {
    printf("Yes, My Stack is Working properly.\n");
     peek();  
    push(10);
    push(20);
    push(50);
    printf("Pop Out: %d\n", pop());
    push(32);
    push(34);
    printf("Top of Stack %d\n", peek());
    return 0;  
}