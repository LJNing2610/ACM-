#include<stdio.h>
int main()
{   
	int n,a,b;
	scanf("%d",&n);
	a=5*n;
	b=3*n;
	if(a<b+11)
	printf("Local");
	else
	printf("Luogu");
	return 0;
}

