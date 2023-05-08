#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
struct node *prev;
int data;
struct node *next;
};
struct node *head=NULL,*new,*h,*e,*t;

void create()
{
int v;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("no space");
}
else
{
printf("Enter value to the node : ");
scanf("%d",&v);
new->data=v;
new->next=NULL;
new->prev=NULL;
}
}


void ins_end()
{
create();
if(head==NULL)
{
head=new;
}
else
{
h=head;
while(h->next!=NULL)
{
h=h->next;
}
new->prev=h;
h->next=new;
count++;
}
}

void del_end()
{
    if(head==NULL)
    {
        printf("empty");
    }
    else if(head->next==NULL)
    {
    h=head;
    head=NULL;
    free(h);
    count--;
    }
    else
    {
        h=head;
        while(h->next!=NULL)
        {
            h=h->next;
        }
        h->prev->next=NULL;
    
        free(h);
        count--;
    }
}


void display()
{
struct node *d=head;
printf("Elements are : ");
while(d!=NULL)
{
printf("%d",d->data);
printf("->");
d=d->next;
}
}
int main()
{
    int ch;
    printf("\n1.insertion at end\n3.display\n5.delete from end\n8.exit\n");
    while(1)
    {
        printf("\nEnter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            ins_end();
            break;
            case 2:
            del_end();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            
            
            default:
            printf("error");
            break;
        }
    }
}





