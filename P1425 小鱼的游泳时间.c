#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e=c-a;
	f=d-b;
	if(b>d)
	{
		printf("%d %d",e-1,f+60);
	}else
	{
		printf("%d %d",e,f);
	}
	return 0;
} 
