#include <stdio.h>
#include <stdlib.h>


#define n 5


int queue[n];
int rear  = 0;
int front = 0;
 
int enqueue(int data);
int dequeue();
void traversal();
 
int main()
{
    int ch, data;
   
    while (1)
    {
        printf("1. Enqueue 2. Dequeue 3. traversal 4. Quit\n");
        printf("Give your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                
                printf("Enter number to enqueue: ");
                scanf("%d", &data);
                if (enqueue(data))
                    printf("Enqueue operation successful");
                else
                    printf("Queue is full");
                break;
 
            case 2:
                data = dequeue();
                if(data)
                    printf("Data => %d", data);
                else
                    printf("Queue is empty");
                break;
 
            case 3:
                traversal();
                break;
            
            case 4:
                exit(0);
        
            default:
                printf("Invalid choice");
        }
        printf("\n");
    }
}

int enqueue(int data)
{
   
    if (rear==n)
    {
        return 0;
    }
    queue[rear] = data;
    rear = rear + 1;
    return 1;
}
 
int dequeue()
{
    
    if (front==rear)
    {
        return 0;
    }
    else
    {
        int data = queue[front];
        front = front + 1;
        return data;
    }
}

void traversal()
{
    if(front!=rear)
    {
        for(int i=front;i<rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}

