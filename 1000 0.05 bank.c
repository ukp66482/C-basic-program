#include <stdio.h>
#include <math.h>
int main(){
double n=1000;
int i=0;
double sum=0;
	printf("%-8s%21s", "Year","Amount on deposit\n");
	for(i=1;i<=10;i++)
	{	
		/*n=n*(1+0.05);
		printf("%d year=%.3lf\n",i,n);*/
		
		
		sum=n*pow(1.05,i);
		printf("%3d year=%21.2lf\n",i,sum);
		 

	}



	return 0;
}
