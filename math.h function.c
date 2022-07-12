#include <stdio.h>
#include <math.h>
int main(){
double x,y,z,a;
x=3;
y=pow(x,2);
z=sqrt(x);
a=exp(1);
printf("y=pow(%.2f,2)=%.2f\n",x,y);
printf("y=sqrt(%.2f)=%.2f\n",x,z);
printf("y=exp(1)=%.8f\n",a);


x=exp(1);
y=log(x);
printf("y=log(%.8f)=%.2f\n",x,y);

x=100;
y=log10(x);
printf("y=log10(%.2f)=%.2f\n",x,y);

x=-1.7;
y=fabs(x);
printf("y=fabs(%.2f)=%.2f\n",x,y);

x=-1.9;
y=ceil(x);
printf("y=ceil(%.2f)=%.2f\n",x,y); 

x=1.9;
y=floor(x);
printf("y=floor(%.2f)=%.2f\n",x,y);

x=2.3;
y=1.1;
z=fmod(x,y);
printf("y=fmod(%.2f,%.2f)=%.2f\n",x,y,z); //decimal % 

x=asin(1);
y=sin(x);
printf("y=sin(%.2f)=%.8f\n",x,y);

return 0;

}
