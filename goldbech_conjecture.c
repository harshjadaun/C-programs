/* Goldbech's conjecture of a number is expressed as sum of 2 primes
   number should be even and greater than 2 */ 
#include<stdio.h>
int checkPrime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0;		
		}	
	}
  return 1;
}
int main(){
	int n,i,j=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<=2 || n%2!=0){
		printf("number is not valid\n");	
	}
  else{
		for(i=2;i<n;i++){
			if(checkPrime(i)&&checkPrime(n-i)){
				printf("Goldbech's conjecture are:%d,%d",i,n-i);
        break;				
			}		
		}	
	}
	return 0;
}
