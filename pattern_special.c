#include<stdio.h>
void main(){
	int i,j,k=0,a[5][5],l=15;
	for(i=4;i>=0;i--){
		for(j=0;j<=4-i;j++){
			a[i][j]=++l;
		}
	}
	for(i=5;i>=1;i--){
		for(j=0;j<5-i;j++){
			printf("\t");
		}
		for(j=1;j<=i;j++){
			printf("%d\t",++k);
		}
		for(j=0;j<i;j++){
			printf("%d\t",a[5-i][j]);
		}
		for(j=0;j<5-i;j++){
			printf("\t");
		}
		printf("\n");
	}
}
