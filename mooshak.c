/* Mooshak mouse has been placed in a maze. There is a huge chunk of cheese somewhere in maze. The maze is represented as 2D array
   of integers, where 0 represents walls, 1 represents paths where mooshak can move and 9 represents huge chunk of cheese. Mooshak
   starts in topleft corner at 0.
   Write a program to determine if Mooshak can reach huge chunk of cheese. The input is path consists of 2D array grid maze matrix.
   Mooshak can move in right direction or down the maze.
*/   
#include<stdio.h>
int top=-1,stack_x[20],stack_y[20];
void push(int m,int n){
	top++;
	stack_x[top]=m;
	stack_y[top]=n;
}
void pop(){
	top--;
}
void main(){
	int i,j,m,n,f=0,a[10][10],x,y;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("Enter inputs:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	push(0,0);
	while(top!=-1){
		x=stack_x[top];
		y=stack_y[top];
		pop();
		if(a[x][y]==9){
			printf("Cheese found at index (%d,%d)\n",x,y);
			f=1;
			break;
		}
		if(a[x][y+1]!=0)
			push(x,y+1);
		if(a[x+1][y]!=0)
			push(x+1,y);	
	}
	if(f==0){
		printf("Cheese not found\n");
	}		
}
