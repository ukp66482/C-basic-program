#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double func(double i);

int main(){

	double u,d,m,u1,d1;
	
		printf("Please enter the maximum value of this interval\n");
		scanf("%lf",&u);
		printf("Please enter the minimum value of this interval\n");
		scanf("%lf",&d);
	
	u1=u;
	d1=d;
	m=fabs(u-d)/2;
	
if(func(u)*func(d)>0){

	printf("Root values of this function do not exist in this interval\n");
	exit(0);

}

while(fabs(u-d)>0.00001){
	
	if(func(u)*func(m)<0){
		d=m;
	}else{
		u=m;
	}					
	
	m=(u+d)/2;

}
	
	printf("The root value in the range of [%.3lf,%.3lf] with the accuracy of 10^-5\n=%lf",d1,u1,(u+d)/2);

	return 0; 
}

double func(double i){
	
	double e;
	
		e=0.0021*pow(i,5)+0.00067*pow(i-13,4)+46.7*i-100;

	return e;
}
