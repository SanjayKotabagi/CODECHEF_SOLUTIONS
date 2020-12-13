#include<stdio.h>
void main()
{
    	int a[10][3],i,n,sum,j;
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
        sum=0;
       for(j=0;j<3;j++)
       {
          sum=sum+a[i][j];
       }
       if(sum==180)
       {
           printf("YES \n");
       }
       else
       {
           printf("NO \n");
       }
    }
}
