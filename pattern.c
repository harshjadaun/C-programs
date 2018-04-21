#include<stdio.h>
void main(){
	int i,j,k=1,l;
	for(i=1;i<=4;i++){
		for(j=1;j<=(15-(i+i+(2*(i-1)+1))/2);j++){
			printf(" ");
		}
		for(j=i;j>0;j--){
			printf("_");
		}
		for(j=1;j<=2*(i-1)+1;j++){
			printf("!");
		}
		for(j=i;j>0;j--){
			printf("_");
		}
		for(j=1;j<=(15-(i+i+(2*(i-1)+1))/2);j++){
			printf(" ");
		}
		printf("\n");
	}
	
}
