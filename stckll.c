#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
    struct node *next;
    int data;
};
struct node *new, *head=NULL;

void create()
{
    int v;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no spce to str");
    }
    else{
        printf("ntr a value 2 b ntrd:");
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
printf("lst is empty");
}
else
{
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
    printf("lmnts r:");
    while(dis!=NULL)
    {
        printf("%d->",dis->data);
        dis=dis->next;
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
        }
    }
}

