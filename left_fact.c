#include<stdio.h>
void main(){
	int i,j=0,g=0,f=0,k=0,l=3,h=0;
	char p[100],common[10],op[100],np[100],c,ci[10];
	scanf("%s",p);
	while(p[l]!='|'&&(g==0)){
		for(i=l;p[i]!='\0';i++){
			if(p[i]!='|'&&(f==0)&&p[i]!='0'){
				common[j]=p[i];
				f=1;
				p[i]='0';
				ci[j]=i;
				j++;
			}
			if(p[i]=='|')
				f=0;
		}
		common[j]='\0';
		ci[j]='\0';
		c=common[0];
		for(i=0;common[i]!='\0';i++){
			if(c!=common[i]){
				h=1;
				break;
			}
		}
		if(h==0)
			op[k++]=c;
		if(h==1){
			op[k]='\0';
			for(i=0;ci[i]!='\0';i++)
				p[ci[i]]=common[i];
			g=1;
		}
		l++;
		j=0;
		f=0;	
	}
	op[k++]='T';
	op[k]='\0';
	i=3;
	while(p[i]!='\0'){
		if(p[i]!='0')
			np[j++]=p[i];
		i++;	
	}
	np[j]='\0';
	printf("S->%s\n",op);
	printf("T->%s",np);
}
