#include <stdio.h>
#include <stdlib.h>
long int factorial(long int x);

int main(){

long int n;
long int fac_n;

printf("Enter an integer,will calculate its factorial\n");
scanf("%ld",&n);

if(n<0){
printf("Error");
exit(0);
}

fac_n=factorial(n);

printf("%d",fac_n);

return 0;
}

long int factorial(long int x){
long Fac_x;
switch(x){
	case 1:
	case 0:
		Fac_x=1;
		break;
	default:
		Fac_x=x*factorial(x-1);

//return Fac_x;
}
return Fac_x;
}
