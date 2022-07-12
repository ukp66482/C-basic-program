#include <stdio.h>
#define N 20

int main(){
	int array[N]={0};
	int key,i,result;

		for(i=0;i<N;i++){
			array[i]=1+i*3;
			printf("%2d ",array[i]);
			if(i%10==9){
				printf("\n");
			}
		}
	result=0;
	printf("Enter a search key(integer)\n");
	scanf("%d",&key);

	for(i=0;i<N;i++){
		if(key==array[i]){
			result=1;
			break;
		}
	}
		if(result==1){
			printf("Found key %d in array",key);
		}else{
			printf("Key %d not found in array",key);
		}

return 0;
}
