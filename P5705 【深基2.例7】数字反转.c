#include<stdio.h>
int main()
{   
    int a,b;
    int A=0;
	int B=0;
	scanf("%d.%d",&a,&b);
	if((100<=a)&&(a<1000))
	{  
		while(a>0)
		{                
		A=A*10+a%10;
		a/=10;
		}
		while(b>0)
		{                
		B=B*10+b%10;
		b/=10;
		}
	printf("%d.%d",B,A); 
	}
		else
		{
		printf("输入数字不在区间"); 
		}
    return 0;
}

