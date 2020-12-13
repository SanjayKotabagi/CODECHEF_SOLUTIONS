#include <stdio.h>

void main() {
 float ia,ra;
 int wd;
scanf("%d%f",&wd,&ia);
 if(wd<ia)
   {
    if(wd%5==0)
    {
       ra=ia-wd-0.50;
       printf("%.2f",ra);
    }
    else if(wd%5!=0)
    {
       printf("%.2f",ia);
    }
   }
  else if(wd>ia)
  {
      printf("%.2f",ia);
  }
	return 0;
}

