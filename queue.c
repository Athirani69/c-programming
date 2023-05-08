#include<stdio.h>
#include<stdlib.h>
int rear=-1;
int front=-1;
int queue[5];

void enqueu()
{
    int v;
    if(rear==4)
    {
        printf("ovrflw:\n");

    }
    else{
        if(front==-1)
        {
            front=front+1;
        }
        printf("ntr a valu :\n");
        scanf("%d",&v);
        rear=rear+1;
        queue[rear]=v;
    }
}

void dequeu()
{
    if(rear==-1 || front>rear)
    {
        printf("queue mpty");
    }
    else{
       printf("dltd lmnt is %d:\n",queue[front]);
       front++;
    }
}

void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf(" %d\n",queue[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.enque\n2.dequeue\n3.display\n4.exit\n");
        printf("ntr the choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueu();
                break;
            case 2:
                dequeu();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                break;
        }
    }
}