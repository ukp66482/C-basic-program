#include <stdio.h>
#include <stdlib.h>
int main(){
int i,j;
int sum;
	FILE *input;
	input=fopen("number.dat","r");
		
	if(input==NULL){
	
	printf("can not open file number.dat\n");
	exit(1);
	}
		
		fscanf(input,"%d",&i);
		fscanf(input,"%d",&j);
	sum=i+j;
	printf("%d+%d=%d",i,j,sum);
	
	
	
	
	fclose(input);
	
	










return 0;
}
