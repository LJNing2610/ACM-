#include<stdio.h>
    int main()
{   
    int m,t,s,a;
    double b;
	scanf("%d %d %d",&m,&t,&s);
	if(t==0)
	{
		printf("0");
		return 0;
	}
	a=m-(s/t);
	if(a<=0)
	printf("0");
	else{
		if(s%t==0)
		printf("%d",a); 
	else
		printf("%d",a-1);
	}
	return 0;
}
