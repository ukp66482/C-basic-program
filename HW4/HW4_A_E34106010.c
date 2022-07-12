#include <stdio.h>
int main(){

long fib,fib_x,fib_y;
int i,j;

fib_x=0;
fib_y=1;

printf("Enter an integer\n");
scanf("%d",&j);

for(i=0;i<=j;i++){
	
	if(i<=1){
	
		fib=i;
	
	}else{
	
		fib=fib_x+fib_y;
	
		fib_x=fib_y;
	
		fib_y=fib;
	
	}

printf("Fibonacci(%d)=%ld\n",i,fib);
}
 
return 0;
} 
