// Note that this problem is for testing fast input-output.
#include <stdio.h>

int main() {
	int a[20],lim,i,d,count=0;
	// d : is the divisor
	// a[20] : to read number
	// lim to set limit for reading numbers
	// for loop control
	// count : to check number of divisors
	scanf("%d%d",&lim,&d);
	for(i=0;i<lim;i++)
	{
	    scanf("%d",&a[i]);
	    if(a[i]%d==0)
	    {
	        count++;
	    }
	}

printf("%d \n",count);

	return 0;
}

