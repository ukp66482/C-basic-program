#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){
srand(time(NULL));

int data[SIZE];
int i,temp,j,k,swap;
k=SIZE-1;
swap=0;

for(i=0;i<=SIZE-1;i++){
	data[i]=rand()%100+1;
}

printf("Before\n");

for(i=0;i<=SIZE-1;i++){
	printf("data[%d]=%d\n",i,data[i]);
}

for(i=0;i<=SIZE-1;i++){

	for(j=0;j<k;j++){
		
		if(data[j]>data[j+1]){
		temp=data[j+1];
		data[j+1]=data[j];
		data[j]=temp;
		swap++;
		
		} 
	}
//printf("swap=%d\n",swap);
	if(swap==0){
		break;
	}
//printf("k=%d\n",k);
swap=0;
k--;
}
printf("\nAfter bubble sort\n\n");

for(i=0;i<=SIZE-1;i++){
	printf("data[%d]=%d\n",i,data[i]);
}
return 0;
}
