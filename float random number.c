#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	double r;  //random number 100-200
	int i;
	srand(time(NULL));

	for(i=1;i<=20;i++){

		r=100*(double)rand()/RAND_MAX+100; //rand to double

		printf("%9.3f",r);
		if(i%5==0)
		printf("\n");


	}
	
return 0;
}
