#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("1");
		}
		for(j=1;j<=i;j++){
			printf("x");
		}
		for(j=1;j<=i;j++){
			printf("x");
		}
		for(j=n;j>=i;j--){
			printf("1");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("1");
		}
		for(j=n;j>=i;j--){
			printf("x");
		}
		for(j=n;j>=i;j--){
			printf("x");
		}
		for(j=1;j<=i;j++){
			printf("1");
		}
		printf("\n");
	}
}
