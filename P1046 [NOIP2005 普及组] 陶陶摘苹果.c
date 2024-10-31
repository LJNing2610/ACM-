#include<stdio.h>
int main(){
	int a[10],b,c,d=0,i,e;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	scanf("%d",&b); 
	c=b+30;
	for(e=0;e<10;e++){
	if(c>=a[e])
		d++;
	}
	printf("%d",d);
    return 0;
}
