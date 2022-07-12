#include <stdio.h>

long int fibonachi(int x);

int main(){
int x,i;
long fib_n;
	printf("Enter an integer\n");
	scanf("%d",&x);
for(i=0;i<=x;i++){
	fib_n=fibonachi(i);
	printf("Fibonachi(%d)=%ld\n",i,fib_n);
}


return 0;
}

long fibonachi(int x){
long fib_x;
/*if(x==0){
fib_x=0;
}else if(x==1){
fib_x=1;}*/
if(x==0|x==1){
fib_x=x;
}
else{
fib_x=fibonachi(x-1)+fibonachi(x-2);}
return fib_x;
}


