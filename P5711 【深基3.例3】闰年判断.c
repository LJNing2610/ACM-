#include<stdio.h>
int main()
{   
	int a;
	int b=0;
	scanf("%d",&a);
	if((a%4==0)&&(a%100!=0)) 
	b=1;	
	if((a%100==0)&&(a%400==0)) 
	b=1;
	printf("%d",b);
	return 0;
}

