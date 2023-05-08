#include<stdio.h>
#include<stdlib.h>
int queue[5];
int front=-1;
int rear=-1;

void enque()
{
    int data;
    if((front==0&&rear==4)||(rear==front-1))
    {
        printf("ovrflw");
    }
    else{
        if(front==-1)
        {
            front++;
        }
        printf("ntr value 2 b nterd:");
        scanf("%d",&data);
        rear=(rear+1)%5;
        queue[rear]=data;
    }
}


void dequeu()
{
    if(front==-1)
    {
        printf("undrflw");
    }
    else{
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
        printf("lmnt dltd is %d",queue[front]);
        front=(front+1)%5;
    }
    }
}

void display()
{
    for (int i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\1.en\n2.de\n3.dis\n4.exit\n");
        printf("ntr ur choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enque();
                break;
            case 2:
                dequeu();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}