#include<stdio.h>
#include<stdlib.h>

int stack[10];
int top=-1;
int value;
int i;

void push()
{
	if (top == 10-1) 
		{
		printf("Error: Stack overflow!\n");
		return;
		}
	stack[++top] = value;
}

int pop() 
{
	if (top ==-1) {
		printf("Error: Stack underflow!\n");
	        return -1;
	}
	return stack[top--];
}

int traversal()
{
	if(top>=0)
	{
		printf("\n The elements in STACK \n");
			for(i=top; i>=0; i--)
				printf("\n%d\n",stack[i]);

	}
	else
	{
	printf("\n The STACK is empty");
	}
   
}

int main()
{
	int choice;
	do
	{	printf("1.Push\n2.pop\n3.traversal\n4.exit\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("\nenter the value to push\n");
			scanf("%d",&value);				
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			traversal();
			break;
		case 4:
			break;
		default:
			printf("\nOOPS! wrong choice\n");
		}
	}
	while(choice !=4);
	
	return 0;
}