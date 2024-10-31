#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3],b[3],c[3],d[3],n;
    scanf("%d",&n);//总数 
	for(int i=0;i<3;i++){
    scanf("%d %d",&a[i],&b[i]);//a为一盒数量，b为一盒钱 
	c[i]=ceil(n*1.0/a[i]);//盒数 =总数/一盒数量 
	d[i]=b[i]*c[i];//每种方案的钱 =一盒钱*盒数 
	}
	sort(d,d+3);//排出最少钱方案为d[0] 
	printf("%d",d[0]); 
 	return 0;
}
