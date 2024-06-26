#include "tzn.h"

int main() {
    // Example usage of linked list
    struct Node* list = NULL;
    insertAtEnd(&list, 10);
    insertAtEnd(&list, 20);
    displayForward(list);
    
    // Example usage of stack
    Stack stack;
    initStack(&stack);
    push(&stack, 30);
    push(&stack, 40);
    printf("Top element of stack: %d\n", peek(&stack));
    
    // The example usage for the linked list queue is still in progress

    return 0;
}
