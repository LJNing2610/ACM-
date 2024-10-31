#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(a%4==0&&a%100!=0||a%400==0){
    	day[2]=29;
	}
    printf("%d",day[b]);
    return 0;
}



