#include<stdio.h>
int main()
{
    int i,min,max,size,a[100];
    printf("ntr size of an array");
    scanf("%d",&size);
    printf("ntr array lmnts:");
    for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<size;i++)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("max of array %d\n",max);
    for(i=1;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("min of ary is %d\n",min);
}