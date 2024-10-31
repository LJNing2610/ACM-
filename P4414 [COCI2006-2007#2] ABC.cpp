#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	char b1,b2,b3;
    for(int i=0;i<3;i++){
	    scanf("%d",&a[i]);
        }
    sort(a,a+3);
    for(int e=0;e<3;e++)
      scanf("%c %c %c",&b1,&b2,&b3);
      printf("%d %d %d",a[b1-'A'],a[b2-'A'],a[b3-'A']);

	return 0;
}
