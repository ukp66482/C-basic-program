#include <stdio.h>
int main(){

	int i,j;
	/*printf("Enter first integer\n");
	scanf("%d",&i);
	printf("Enter second integer\n");
	scanf("%d",&j);*/
	
	printf("Enter two integers\n");
	scanf("%d%d",&i,&j);
	
	if(i>j){
	printf("%d>%d\n",i,j);
	}	
	if(i<j){
	printf("%d<%d\n",i,j);
	}
	if(i==j){
	printf("%d=%d\n",i,j);
	}
	if(i!=j){
	printf("%d!=%d\n",i,j);
	}
	if(i>=j){
	printf("%d>=%d\n",i,j);
	}
	if(i<=j){
	printf("%d<=%d\n",i,j);
	}
	
	if(i+1==j-1){
	printf("%d+1=%d-1\n",i,j);
	}
	i=i+1==j-1;
	printf("%d",i);
	
	return 0;
	
} 
