/* Grammar should not be left recursive
   if there are null productions then it is producing wrong output in some cases
*/   
#include<stdio.h>
#include<string.h>
int n;
char production[10][10],result[10][10];
void addToResult(char c,int i){
	int k;
	for(k=0;result[i][k]!='\0';k++)
		if(result[i][k]==c)
			return;
	result[i][k]=c;
	result[i][k+1]='\0';		
}
void FIRST(char c,int i){
	int j,k;
	/* If c is null, FIRST)(X)={$}
	 If c is terminal, FIRST(X)={terminal} */
	if(islower(c)||c=='$'){
		addToResult(c,i);
		return;
	}
	// If c is non terminal read each production
	for(j=0;j<n;j++){
		// Find production with c as LHS
		if(production[j][0]==c){
			// If X->$(null) is a production, then add $ to FIRST(X)
				if(production[j][3]=='$')
					addToResult('$',i);
					
			/* If X-> Y1,Y2,...Yk is a production, then add a to FIRST(X) 
			 if for some i, a is in FIRST(Yi), and $(null) is in all of FIRST(Y1),....FIRST(Yi-1) */
			else{
				k=3;
				while(production[j][k]!='\0'){
					FIRST(production[j][k],i);
					k++;
				}
			
			} 	
		}
	}
}
void main(){
 int i,t,f=0,j,g=0,k;
 char T[10],NT[10];
 T[0]='\0';
 printf("Enter the number of Non-Terminals:");
 scanf(" %d",&n);
 printf("Enter the non-terminals:\n");
 for(i=0;i<n;i++){
  scanf(" %c",&NT[i]);
 }
 printf("Enter the productions:\n");
 for(i=0;i<n;i++){
  	scanf(" %s",&production[i]);
 }
 //For finding terminals
 for(i=0;i<n;i++){
 	for(j=3;j<strlen(production[i]);j++){
 		if(production[i][j]=='|'||isupper(production[i][j])||production[i][j]=='$'){
 			continue;	
		}
		else{
	 		for(k=0;T[k]!='\0';k++){
	 			if(production[i][j]==T[k]){
	 				g=1;
					break;	
				}	
			}
			if(g==0){
				T[k]=production[i][j];
				T[k+1]='\0';
			}
		}
	}
	g=0;
 }
 
 for(i=0;T[i]!='\0';i++){
 	printf("%c ",T[i]);
 }
 printf("\n");
 for(i=0;i<n;i++){
 	for(j=3;j<strlen(production[i]);j++){
 		if(f==0){
 			FIRST(production[i][j],i);	
 			f=1;
 		}
 		if(production[i][j]=='|'){
 			f=0;
		}
	}
	f=0;
 }
 
 for(i=0;i<n;i++){
 	printf("First of %c is {",production[i][0]);
 	for(j=0;j<strlen(result[i]);j++){
 		printf(" %c",result[i][j]);
    }
    printf(" }\n");
 }
} 
	
