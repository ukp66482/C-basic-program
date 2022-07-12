#include <stdio.h>

void CallFunc(int a);

void callarrayfunc(int Array[]);

int main(){

	int a=2;

printf("in main(),a=%d\n",a);

CallFunc(a);

printf("after CallFunc(a), in main(),a=%d\n",a);

int A[4]={1,9,25,49};
int i;

printf("\nin main()\n");
for(i=0;i<4;i++){
printf("A[%d]=%d\n",i,A[i]);
}

callarrayfunc(A);

printf("after callarrayfunc(A),in main()\n");
for(i=0;i<4;i++){
printf("A[%d]=%d\n",i,A[i]);
}


callarrayfunc(A);

printf("after second callarrayfunc(A),in main()\n");
for(i=0;i<4;i++){
printf("A[%d]=%d\n",i,A[i]);
}



return 0;
} 

void CallFunc(int a){
a+=5;
printf("in callfunc(),a+=5,a=%d\n",a);
}

void callarrayfunc(int Array[]){
int i;
for(i=0;i<4;i++){
	Array[i]+=i;
	printf("in callarrayfunc(),Array[%d]+=%d,A[%d]=%d\n",i,i,i,Array[i]);
}

}
