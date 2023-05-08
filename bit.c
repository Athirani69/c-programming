#include<stdio.h>
#include<stdlib.h>

void sunion(int A[],int B[])
{
    printf("AUB is:\n");
    for(int i=1;i<10;i++)
    {
    if(A[i]||B[i]==1)
    {
        printf("1\t");
    }
    else{
        printf("0\t");
    }
    }
}

void setintr(int A[],int B[])
{
    printf("A intersctn B is :\n");
    for(int i=1;i<10;i++)
    {
        if(A[i]&&B[i])
        {
            printf("1\t");
        }
        else{
            printf("0\t");
        }
    }
}

void complmnt(int A[],int B[])
{
    printf("A complemnt is:\n");
    for(int i=1;i<10;i++)
    {
        if(A[i]==1)
        {
            printf("0\t");
        }
        else{
            printf("1\t");
        }
    }
    printf("complmnt of B is:\n");
    for(int i=1;i<10;i++)
    {
        if(B[i]==1)
        {

            printf("0\t");
        }
        else{
            printf("1\t");
        }
    }
}


int main()
{
    int A[10]={0,0,0,0,0,0,0,0,0,0},B[10]={0,0,0,0,0,0,0,0,0,0},v,s1,s2;
    printf("set oprtns r:\n");
    printf("ntr the size of A:\n");
    scanf("%d",&s1);
    printf("ntr d lmnts of A:\n");
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&v);
        A[v]=1;
    }
    printf("ntr size of B :\n");
    scanf("%d",&s2);
    printf("ntr elmts of B:\n");
    for(int i=0;i<s2;i++)
    {
        scanf("%d",&v);
        B[v]=1;
    }

    while(1)
    {
        int ch;
        printf("\n1.union\n2.inter\n3.complmnt\n4.eexit\n");
        printf("ntr ur choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                sunion(A,B);
                break;
            case 2:
                setintr(A,B);
                break;
            case 3:
                complmnt(A,B);
                break;
            case 4:
                exit(0);
        }
    }
}