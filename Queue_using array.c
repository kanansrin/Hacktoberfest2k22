#include <stdio.h>
#define N 5
int A[N], front = -1, rear = -1;
int Enque(int n)
{
    if (rear == -1)
    {
        front++;
        rear++;
        A[rear] = n;
    }
    else if (rear == N - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear++;
        A[rear] = n;
    }
}
int Deque()
{
    int n;
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("the element %d is deleted from the Queue\n", A[front]);
        front++;
        printf("Queue is empty\n");
    }
    else
    {
        printf("the element %d is deleted from the Queue\n", A[front]);
        front++;
    }
}
int Display()
{
    int i;
    if (rear == -1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = front; i < N; i++)
        {
            printf("%d\t", A[i]);
        }
    }
    printf("\n");
}
int Peek()
{
    if (front >rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d", A[front]);
    }
}
int isfull()
{
    if (rear == N - 1)
    {
        printf("Queue is full\n");
    }
    else if(rear<front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue has space \n");
    }
}
int isempty()
{
    if (front == -1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue has elements \n");
    }
}
int main()
{
    int x, ch;
    do
    {
        printf("Press 0 to exit \n");
        printf("Press 1 for Enque operation \n");
        printf("Press 2 for Dequeue operation \n");
        printf("Press 3 for Peek operation \n");
        printf("Press 4 to check the queue is full or not\n");
        printf("Press 5 to check the queue is empty or not\n");
        printf("Press 6 for Display operation \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the element to be pushed in the queue\n");
            scanf("%d", &x);
            Enque(x);
            break;
        }
        case 2:
        {
            Deque();
            break;
        }
        case 3:
        {
            Peek();
            break;
        }
        case 4:
        {
            isfull();
            break;
        }
        case 5:
        {
            isempty();
            break;
        }
        case 6:
        {
            Display();
            break;
        }
        default:
        {
            printf("Invalid input\n");
            break;
        }
        }
    } while (ch != 0);
}
