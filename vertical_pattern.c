#include<stdio.h>
void main(){
	int i,j,n,a[10],ans[50][50]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<a[i];j++){
			ans[n-a[i]+j][i]=1;
		}
	}
	for(i=0;i<n;i++){
	printf("\t");
		for(j=0;j<n;j++){
			if(ans[i][j]==0)
				printf(" ");
			else
				printf("#");	
		}
		printf("\n");
	}
}
