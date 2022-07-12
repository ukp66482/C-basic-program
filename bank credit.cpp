#include <stdio.h>
#include <math.h>
int main(){
double n=1000;
int i=0;
double sum=0;
	for(i=1;i<=10;i++)
	{	
		/*n=n*(1+0.05);
		printf("%d year=%.3lf\n",i,n);*/
		
		
		sum=n*pow(1.05,i);
		printf("%3d year=%5.3lf\n",i,sum);
		

	}



	return 0;
}
