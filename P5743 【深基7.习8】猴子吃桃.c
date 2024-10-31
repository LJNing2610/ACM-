#include<stdio.h>
int main(){
    int n,a=1;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		a++;
		a*=2;
	}
	printf("%d",a);
	return 0;
}
    
