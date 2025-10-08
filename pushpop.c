#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int Stack[SIZE], top = -1;

int main() {
    int value, choice;

    while (1) {
        printf("\n\n*** Menu ***\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong selection! Try again.");
        }
    }

    return 0;
}

void push(int value) {
    if (top == SIZE - 1)
        printf("\nStack is full! Insertion not possible.");
    else {
        top++;
        Stack[top] = value;
        printf("\nInsertion successful.");
    }
}

void pop() {
    if (top == -1)
        printf("\nStack is empty! Deletion not possible.");
    else {
        printf("\nDeleted: %d", Stack[top]);
        top--;
    }
}

void display() {
    if (top == -1)
        printf("\nStack is empty!");
    else {
        int i;
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", Stack[i]);
    }
}

