#include<stdio.h>
#include<math.h>
void kaprekarNumbers(int p, int q) {
    int i,j=0,count=0,r_digit,rev=0,sum=0,count1=0,r,flag=0,a[6];
    long long int x,square;
    for(i=p;i<=q;i++){
        x=i;
        while(x!=0){
            count++;
            x=x/10;
        }
        square=pow(i,2);
        x=square;
        while(x!=0){
            count1++;
            x=x/10;
        }
        r_digit=count;
        count=0;
        x=square;
        while(count!=r_digit){
            r=x%10;
            a[j++]=r;
            count++;
            x=x/10;
        }
        for(j=r_digit-1;j>=0;j--){
        	sum+=a[j]*pow(10,j);
		}
        x=square;
		r=x/((int)pow(10,r_digit));	
        if((r+sum)==i){
            printf("%d ",i);
            flag=1;
        }
        count=0;count1=0;rev=0;sum=0,j=0;
    }
    if(flag==0){
        printf("INVALID RANGE\n");
    }
   
}
void main(){
	int p,q;
	scanf("%d%d",&p,&q);
	kaprekarNumbers(p,q);
}
