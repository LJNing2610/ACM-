#include <bits/stdc++.h>
using namespace std;
int a[3],b;
int main()
{
	for(int i=0;i<3;i++)
	scanf("%d",&a[i]);
	sort(a,a+3);
	for(b=a[0];b>1;b--)
	if(a[0]%b==0&&a[2]%b==0)
	break;
	printf("%d/%d",a[0]/b,a[2]/b);
}
