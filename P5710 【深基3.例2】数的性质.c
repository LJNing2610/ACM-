#include<stdio.h>
int main()
{ 
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	int g=0;
	scanf("%d",&a);
	if(a%2==0)
	    c++;
	if(a>4&a<=12)
        c++;
	{
    if(c==2)
		d=1;
	if((1==c)||(c==2))
		e=1;
	if(c==1)
		f=1;
	if(c==0)
		g=1;
	}
		printf("%d %d %d %d",d,e,f,g);
	return 0;
}

