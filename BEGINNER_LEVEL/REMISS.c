#include<stdio.h>
void main()
{
    int a[10],n,b[10],i,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d  %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[i]>b[i]?a[i]:b[i];
        max=a[i]+b[i];
        printf("%d %d\n",min,max);
    }
}
