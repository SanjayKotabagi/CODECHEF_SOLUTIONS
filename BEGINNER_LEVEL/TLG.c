#include <stdio.h>

void main() {

    int a[10][2],i,j,n,one=0,two=0,dif,os=0,ts=0,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%d %d",&a[i][j],&a[i][j+1]);
        }
    }
    for(i=0;i<n;i++)
    {
            if(a[i][0]>a[i][1])
            {
                one++;
            }
            else if(a[i][0]<a[i][1])
            {
                two++;
            }
    }
    for(i=0;i<n;i++)
    {
        os = os + a[i][0];
        ts = ts + a[i][1];
    }
    if(one>two)
    {
        flag = 1;

        printf("%d %d",flag,dif);
    }
    else
    {
        flag = 2;
        printf("%d %d",flag,dif);
    }
}
