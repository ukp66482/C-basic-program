#include <stdio.h>
#define N 100

int binarysearch(const int array[],int key);
void printarray(const int array[],int low,int high); 

int main(){
int array[N]={0};
int i,key,result;

for(i=0;i<N;i++){
	array[i]=2+i*5;
}

printf("Enter search key\n");
scanf("%d",&key);

result=binarysearch(array,key);

if(result!=-1){
	printf("Found key value in array[%d] =%d\n",result,array[result]);
}else {
	printf("key value %d not found\n",key);
}

return 0;
}

int binarysearch(const int array[],int key){
int result;
int min,max,M;
min=0;
max=N-1;
//result=-1;

	while(max>=min){
		printf("\nSearch range:\n");
		printarray(array,min,max);
		M=(max+min)/2;
			printf("\nmedian=%d\n",M);
		if(array[M]==key){
		return M;
		}else if(array[M]>key){
			max=M-1;
		}else{
			min=M+1;
		}


	}

return -1;
}

void printarray(const int array[],int low,int high){
int i;
int count=0;
for(i=low;i<=high;i++){
	printf("%3d ",array[i]);
	if(count%10==9){
	printf("\n");
}
	count++;
}
}




