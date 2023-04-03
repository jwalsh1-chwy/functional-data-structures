#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

StackNode* newStackNode(int data) {
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

StackNode* push(StackNode* stack, int data) {
    StackNode* new_node = newStackNode(data);
    new_node->next = stack;
    return new_node;
}

StackNode* pop(StackNode* stack, int* popped_data) {
    if (!stack) {
        return NULL;
    }
    StackNode* next_node = stack->next;
    *popped_data = stack->data;
    free(stack);
    return next_node;
}

void printStack(StackNode* stack) {
    while (stack) {
        printf("%d ", stack->data);
        stack = stack->next;
    }
    printf("\n");
}

void freeStack(StackNode* stack) {
    StackNode* temp;
    while (stack) {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

int main() {
    StackNode* stack = NULL;
    stack = push(stack, 1);
    stack = push(stack, 2);
    stack = push(stack, 3);
    printStack(stack);

    int popped_data;
    stack = pop(stack, &popped_data);
    printf("Popped: %d\n", popped_data);
    printStack(stack);

    freeStack(stack);
    return 0;
}
