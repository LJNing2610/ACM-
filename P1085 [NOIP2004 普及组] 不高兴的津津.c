#include <stdio.h>
	int main ()
{
    int a,b,s,m=0,i,d=0; 
    for (i=1;i<8;i++)   
      {
        scanf("%d %d",&a,&b);  
        s=a+b;    
        if ((s>m)&&(s>8)) m=s,d=i; 
      }
    printf("%d",d); 
    return 0;             
}




