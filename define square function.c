#include <stdio.h>

double square(double i);


int main(){
double x;
double y;
printf("Enter a number:\n");
scanf("%lf",&x);

	y=square(x);
	printf("y=square(%.2lf)=%.2lf\n",x,y);
	
printf("Enter a number:\n");
scanf("%lf",&x);

	y=square(x);
	printf("y=square(%.2lf)=%.2lf\n",x,y);
	


return 0;
} 

double square(double i){
	double i2;
	i2=i*i;
	return i2;
} 
