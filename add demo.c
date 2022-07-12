#include <stdio.h>
int main(){
	int i,j;
	int result;
	printf("Enter integer 1:\n");
	scanf("%d",&i);
	printf("Enter integer 2:\n");
	scanf("%d",&j);
	
	printf("%d+%d=%d\n",i,j,i+j);	
	printf("%d-%d=%d\n",i,j,i-j);
	printf("%d*%d=%d\n",i,j,i*j);
	printf("%d/%d=%d\n",i,j,i/j);
	printf("%d %% %d=%d\n",i,j,i%j);
	result=(i*5%6+5)%j;
	printf("(%d*5%%6+5)%%%d=%d",i,j,result);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
