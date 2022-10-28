#include<stdio.h>
#include<stdlib.h>
struct newnode
{
    int data;
    struct newnode *link;
} *top=NULL;
typedef struct newnode newnode;

void Push(int x)
{ 
    newnode *temp;
    temp=(newnode*)malloc(sizeof(newnode));
    temp->data=x;
    temp->link=top;
    top=temp;
}
void Pop()
{
   newnode *q;
   if ((top==NULL))
   {
    printf("Stack Underflow\n");
   }
   else
   {
    printf("the element %d has been popped out of the stack\n",top->data);
    q=top;
    top=top->link;
    free(q);
   }
   
}
void Peek()
{
    if ((top==NULL))
   {
    printf("Stack Underflow\n");
   }
   else{
    printf("the element %d is at the top of the stack\n",top->data);
   }
}
void Display()
{
    newnode *q;
    q=top;
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->link;
    }
    printf("\n");
}
int main()
{
    int ch;
    int n;
    do
    {
        printf("Press 1 for push\n");
        printf("Press 2 for pop\n");
        printf("press 3 for peek\n");
        printf("press 4 for display\n");
        printf("press 0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the item you want to push in the stack\n");
            scanf("%d",&n);
            Push(n);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        
        default:
        printf("Invalid choice\n");
            break;
        }
        
    } while (ch !=0);
}