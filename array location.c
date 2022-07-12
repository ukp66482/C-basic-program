#include <stdio.h>
int main(){

int a=2;
printf("a=%d saved at memory location %d\n",a,&a);
printf("a=%d saved at memory location %p\n",a,&a);

int A[4]={1,9,25,49};
int i;
for(i=0;i<4;i++){

printf("A[%d]=%d saved at memory location %p\n",i,A[i],&A[i]);
}

printf("&A=%p\n",A);
printf("A=%p\n",A);


return 0;
}
