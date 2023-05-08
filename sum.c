#include<stdio.h>
int main()
{
    int i,size,a[100],sum=0;
    printf("ntr the siz of an array:\n");
    scanf("%d",&size);
    printf("ntr array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];

    }
    printf("sum is %d",sum);
}