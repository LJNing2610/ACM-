#include<stdio.h>
int main()
{   
	double m,h,b;
	scanf("%lf %lf",&m,&h);
	b=m/(h*h);
	if(b<18.5)
	printf("Underweight");
	if((b>=8.5)&&(b<24))
	printf("Normal");
	if(b>=24){
		printf("%.6g\n",b);
		printf("Overweight");
	}
	return 0;
}

