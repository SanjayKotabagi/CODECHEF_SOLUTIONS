#include<stdio.h>
void main()
{
    int a[10][10],n,i,j,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i][1]);
        printf("\n");
    }
}
