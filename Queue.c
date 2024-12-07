#include<stdio.h>
#define SIZE 100

int queue[SIZE];
int front =-1, rear = -1;

int isFull()
{
    return rear == SIZE -1;
}

int isEmpty()
{
    return front ==-1 || front >rear;
}

void enqueue (int value)
{
    if (isFull())
    {
        printf("Queue is Full\n");
    }

    else {
        if(front ==-1)
        {
            front =0;
        }
        rear ++;
        queue[rear] = value;
        printf("%d is inserted\n", value);
    }
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d is removed\n", queue[front]);
        front++;
    }
}

void display()
{
    if(isEmpty())
    {
         printf("Queue is empty\n");
    }
    else
    {
        for(int i=front; i<=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}

int main()
{
    int choice, value;
    while(1)
    {
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
        printf("4. exit\n");
        printf("enter choice:");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter value: ");
             scanf("%d", &value);
             enqueue(value);
             break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("exit");
            return 0;

        }
    }

    return 0;
}