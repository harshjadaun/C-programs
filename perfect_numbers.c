#include<stdio.h>
void main(){
	int n,sum=1,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n){
		printf("Number is perfect\n");
	}
	else{
		printf("Number is not perfect\n");
	}
}
