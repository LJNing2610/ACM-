#include<stdio.h>

int main()
{
    int h,r,n;
    scanf("%d %d",&h,&r);
    double v=3.14*r*r*h;
    n=20000/v;
    printf("%d",n+1);
	return 0; 
} 
