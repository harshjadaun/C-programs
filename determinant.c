#include<stdio.h>
int determinant(int a[][10],int n){
	int d=0,pr,r,s,b[10][10],c[10],i,j,k;
	if(n==2){
		d+=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
		return d;
	}
	for(i=0;i<n;i++){
		r=0;s=0;
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(j!=0&&k!=i){
					b[r][s]=a[j][k];
					s++;
					if(s>n-2){
							s=0;
							r++;				
					}	
				}						
			}		
		}
		for(j=0,pr=1;j<=(1+i);j++)
			pr=(-1)*pr;
		c[i]=pr*determinant(b,n-1);				
	}
	for(i=0;i<n;i++)
		d+=(a[0][i]*c[i]);
	return d;
}
void main(){
	int n,a[10][10],i,j;
	printf("Enter the order of matrix:");
	scanf("%d",&n);
  for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("%d\n",determinant(a,n));  
}
