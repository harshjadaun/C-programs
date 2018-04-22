#include<stdio.h>
void main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(b!=0){
		c=a&b;
		a=a^b;
		b=c<<1;
	}
	printf("%d\n",a);
}
