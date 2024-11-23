#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    struct Node* head = NULL;

    struct Node* firstNode = (struct Node*)malloc(sizeof(struct Node));
    firstNode->data = 10;
    firstNode->next = NULL;
    firstNode->prev = NULL;
    head = firstNode;

    struct Node* secondNode = (struct Node*)malloc(sizeof(struct Node));
    secondNode->data = 20;
    secondNode->next = NULL;
    secondNode->prev = firstNode;

    firstNode->next = secondNode;

    printf("First node data: %d\n", head->data);
    printf("Second node data: %d\n", secondNode->data);

    return 0;
}
