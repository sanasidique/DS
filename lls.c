#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header = NULL;
struct node *ptr(int data)
struct node *CreateNode(int data)
{
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = NULL;
	return newNode;
}
void insertAtFront(int data)
{
	struct node *newNode ;
	newNode = CreateNode(data);
	if(header==NULL)
	{
		header = newNode;
	}
	else
	{
		newNode->link=header;	
		header = newNode;
	}
}
int main()
{
	struct node *node;
	node = CreateNode(10);
	printf("Node data:%d\n", node->data);

        struct node *currentnode;	
	node->link=currentnode;
	currentnode=CreateNode(20);
	printf("Node data:%d\n", currentnode->data);


	return 0;
}

void traversal()
{
	struct node *ptr;
	ptr=newNode;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
}

