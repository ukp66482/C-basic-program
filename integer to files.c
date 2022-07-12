#include<stdio.h>

int main(){
int i,j;
FILE *out;


	printf("Enter First Integer\n");
	scanf("%d",&i);
	printf("Enter Second Integer\n");
	scanf("%d",&j);

	printf("%d\n%d\n",i,j);

out = fopen("number.dat","a");
fprintf(out,"%d\n%d\n",i,j);
fclose(out);









 return 0;
}
