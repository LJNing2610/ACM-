#include<stdio.h>
int main()
{   
	int a,b;
	int c=1;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c*=b;
	}
	printf("%d",c);
	return 0;
}

