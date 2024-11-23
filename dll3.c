#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
    } else {
        struct Node* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    }
}

void traverseList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
}

void deleteNode(struct Node** head, int data) {
    struct Node* current = *head;

    if (*head == NULL) {
        return;
    }

    if (current != NULL && current->data == data) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return;
    }

    while (current != NULL && current->data != data) {
        current = current->next;
    }

    if (current == NULL) {
        return;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    free(current);
}

int main() {
    struct Node* head = NULL;

    insertNode(&head, 5);
    insertNode(&head, 10);
    insertNode(&head, 15);

    traverseList(head);

    deleteNode(&head, 10);

    traverseList(head);

    return 0;
}
