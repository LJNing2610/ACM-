#include<stdio.h>
int main()
{
   int x;
   int n,i,sum=0;
   scanf("%d %d",&x,&n);
   for(i=1;i<=n;i++)
   {
        switch(x)
        {
           case 1:
        	sum+=50;
		   case 2:
		   	sum+=50;
		   case 3:
		   	sum+=50;
		   case 4:
		   	sum+=50;
		   case 5:
		   sum+=50;
           case 6: 
		   x++;continue;
           case 7:
		   x=1;continue;
        }
      x++;
  }
  printf("%d\n",sum);
  return 0;
}
