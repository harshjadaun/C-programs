#include<stdio.h>
void main(){
	int i,j,k=1,l=1,m,n;
	for(i=1;i<=5;i++){
		if(i%2!=0){
			for(j=1;j<=l;j++){
				if(j%2!=0){
					printf("%d",k);
					k++;
				}
				else
					printf("*");
			}

		}
		else{
			m=l/2+1;
			n=k+m;
			for(j=1;j<=l;j++){
				if(j%2!=0){
					printf("%d",k+m-1);
					m--;				
				}
				else
					printf("*");			
			}
			k=n;
		}
		l+=2;
		printf("\n");
	}
}
