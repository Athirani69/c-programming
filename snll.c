#include<stdio.h>
#include<stdlib.h>
int count =0;
struct node{
    int data;
    struct node *next; 
};
struct node *new,*head=NULL;


void create()
{
    int v;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no spce to store:");
    }
    else{
        printf("ntr a new lmnt:\n");
        scanf("%d",&v);
        new->data=v;
        new->next=NULL;
    }
}
void ins_end()
{
    create();
    if(head==NULL)
    {
        head=new;
    }
    else{
        struct node *h;
        h=head;
        while(h->next!=NULL)
        {
            h=h->next;
        }
        h->next=new;
        count++;
    }
}

void del_end()
{
    if(head==NULL)
    {
        printf("mpty");

    }
    else{
        struct node *h;
        struct node *e;
        h=head;
        while(h->next!=NULL)
        {
            e=h;
            h=h->next;
        }
        e->next=NULL;
        free(h);
        count--;

    }
}


void display()
{
    struct node *dis=head;
    while(dis!=NULL)
    {
        printf("%d->",dis->data);
        dis=dis->next;
    }
}


int main()
{
while(1)
{
    int ch;
    printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
    printf("ntr ur choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:

            
            ins_end();
            break;
        case 2:
            
            del_end();
            break;
        case 3:
            printf("DISPLAY\n");
            display();
            break;
        case 4:
            exit(0);
            
        default:
            break;
        }
    }
return 0;
}
