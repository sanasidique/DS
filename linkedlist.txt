#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main() {
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    
    struct node *current=malloc(sizeof(struct node));
    current->data=100;
    current->link=NULL;
    head->link=current;
    
    printf("%d\n%d\n",head->data, current->data);

    struct node *traverse = head;  
    while (traverse != NULL) {  
        printf("%d-> ", traverse->data);  
        traverse = traverse->link;  
    }

    printf("NULL\n"); 
    

    return 0;
}