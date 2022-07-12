#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
long int i,p,a,b,c,d,e,f;
double A,B,C,D,E,F;
A=B=C=D=E=F=0;
a=b=c=d=e=f=0;
srand(time(NULL));

for(i=1;i<=1000000;i++){
	
	p=rand()%6+1;
	switch(p){
	case 1:
	a++;
	break;
	case 2:
	b++;
	break;
	case 3:
	c++;
	break;
	case 4:
	d++;
	break;
	case 5:
	e++;
	break;
	case 6:
	f++;
	break;
	}
}

printf("face 1=	%ld prob=%lf\n",a,(double)a/1000000);
printf("face 2=	%ld prob=%lf\n",b,(double)b/1000000);
printf("face 3=	%ld prob=%lf\n",c,(double)c/1000000);
printf("face 4=	%ld prob=%lf\n",d,(double)d/1000000);
printf("face 5=	%ld prob=%lf\n",e,(double)e/1000000);
printf("face 6=	%ld prob=%lf\n",f,(double)f/1000000);

return 0;
} 
