#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[5];

void push()
{
    int data;
    if(top==4)
    {
        printf("stack overflw");
    }
    else{
        printf("ntr a value to stck:");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("popd elmnt is %d\n",stack[top]);
        top--;
    }
}

void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    while(1)
    {
        int ch;
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("ntr ur choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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