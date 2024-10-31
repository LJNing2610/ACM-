#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double s,p,d;
    scanf("%d %d %d",&a,&b,&c);
	p=0.5*(a+b+c);
	s=p*(p-a)*(p-b)*(p-c);
	d=pow(s,0.5);
	printf("%.1f",d);
	return 0;
} 
