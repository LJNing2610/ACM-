#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3],b[3],c[3],d[3],n;
    scanf("%d",&n);//���� 
	for(int i=0;i<3;i++){
    scanf("%d %d",&a[i],&b[i]);//aΪһ��������bΪһ��Ǯ 
	c[i]=ceil(n*1.0/a[i]);//���� =����/һ������ 
	d[i]=b[i]*c[i];//ÿ�ַ�����Ǯ =һ��Ǯ*���� 
	}
	sort(d,d+3);//�ų�����Ǯ����Ϊd[0] 
	printf("%d",d[0]); 
 	return 0;
}
