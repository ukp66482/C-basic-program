#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){
srand(time(NULL));

int data[SIZE];
int i,temp,j;

for(i=0;i<=SIZE-1;i++){
	data[i]=rand()%100+1;
}
printf("Before\n");
for(i=0;i<=SIZE-1;i++){
	printf("data[%d]=%d\n",i,data[i]);
}

for(i=0;i<=SIZE-1;i++){

	for(j=0;j<=SIZE-1;j++){
		
		if(data[j]>data[j+1]){
		temp=data[j+1];
		data[j+1]=data[j];
		data[j]=temp;
		} 
	
	}

}
printf("\n\n\nAfter\n");
for(i=0;i<=SIZE-1;i++){
	printf("data[%d]=%d\n",i,data[i]);
}
return 0;
}
