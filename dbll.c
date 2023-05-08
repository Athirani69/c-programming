#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
    int data;
    struct node *next;

};
struct node *head=NULL,*new;


void create()
{
    int v;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        head=new;
    }
    else{
        printf("ntr new node:\n");
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
    else
    {
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

void del_beg()
{
    if(head==NULL)
    {
        printf("lst mpty:\n");

    }
    else
    {
        struct node *t;
        t=head;
        head=head->next;
        free(t);
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
	printf("\n1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
	printf("ntr ur choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		ins_end();
		break;
	case 2:
		del_beg();
		break;
	case 3:
		display();
		break;
	case 4:
		exit(0);
	default:
		printf("error");
		break;
	}
}
}
