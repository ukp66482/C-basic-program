#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int p;
	int i;
	unsigned seed;
	//printf("%d",RAND_MAX);
	scanf("%u",&seed);
	srand(seed);
	//srand(time(NULL));			both can use
	
	for(i=1;i<=20;i++){
	
		p=(rand()%6+1);
	
		printf("%4d",p);

	if(i%5==0)
	printf("\n");
}


return 0;
}
