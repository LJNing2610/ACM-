#include<stdio.h>
int main()
{
	int a[3],max,min=100000,maxr,minr,mid,i;  
	
	for(i=0;i<3;i++){
	scanf("%d",&a[i]);
		if(a[i]>max)  
		{
			max=a[i];  
			maxr=i;  
		}
		else if(a[i]<min)   
		{
			min=a[i];  
			minr=i;  
		}
	}
	
	for(i=0;i<3;i++)
		if(i!=maxr&&i!=minr)  
			mid=a[i];  

	printf("%d %d %d",min,mid,max);  
	return 0;
}
