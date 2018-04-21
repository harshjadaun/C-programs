// matrix whose sum of rows or columns are equal
#include<stdio.h>
void main(){
	int n,i,j,a[10][10]={0},number=1,r,c;
	printf("Enter the size(odd) of matrix:");
	scanf("%d",&n);
	if(n%2==0){
		printf("input invalid!!!");
		return;
	}
	a[n-1][(n-1)/2]=number++;
	r=n-1;
	c=(n-1)/2;
	while(number<=n*n){
		if((number-1)%n==0){
			a[(r-1)%n][c%n]=number++;
			r=r-1;
		}
		else{
			a[(r+1)%n][(c-1)%n]=number++;
			r=(r+1)%n;
			c=c-1;
			if(c==0){
				c=n;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
