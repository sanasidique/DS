#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->link = NULL;  

    struct node *temp = head;
    while (temp->link != NULL) {  
        temp = temp->link;
    }

    temp->link = new_node;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;  
    head->link = NULL;  

   
    struct node *current = malloc(sizeof(struct node));
    current->data = 100;  
    current->link = NULL;   list)

    head->link = current;

    
    printf("%d\n%d\n", head->data, current->data);

    struct node *traverse = head;
    while (traverse != NULL) {  
        printf("%d -> ", traverse->data);
        traverse = traverse->link;
    }

    printf("NULL\n");

    add_at_end(head, 200);

    printf("\nAfter adding a new element at the end:\n");
    traverse = head;
    while (traverse != NULL) {  
        printf("%d -> ", traverse->data);
        traverse = traverse->link;
    }

    printf("NULL\n");

    return 0;
}