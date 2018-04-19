// Program for least recently used algorithm
#include<stdio.h>
int min_find(int n,int *t){
	int min=0,i;
	for(i=0;i<n;i++){
		if(t[min]>t[i]){
			min=i;
		}
	}
	return min;
}
void main(){
	int n,x,k=0,size,i,j,a[20],b[10],t[10],time=0,f=0,count=0;
	scanf("%d%d",&n,&size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++){
		b[i]=-1;
		t[i]=0;
	}	
	for(i=0;i<size;i++){
		x=a[i];
		for(j=0;j<n;j++){
			if(b[j]==x){
				f=1;
				break;
			}
		}
		if(f==0){
			b[k%n]=x;
			t[k%n]=++time;
			k=min_find(n,t);
			count++;
		}
		if(f==1){
			t[j%n]=++time;
			f=0;
			k=min_find(n,t);
		}
	}
	printf("%d\n",count);	
}
