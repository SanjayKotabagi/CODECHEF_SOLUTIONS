#include<stdio.h>
int main(void) {
    int i,j,t,sum=0,rem,n,lim;
    int a[20];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        while(a[i]!=0)
    {
        sum=sum+(a[i]%10);
        a[i]=a[i]/10;
    }
        printf("%d \n",sum);
        sum=0;
    }
	return 0;
}

