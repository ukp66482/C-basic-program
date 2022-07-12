#include <stdio.h>

int maximum(int x,int y,int z);
int minimum(int x,int y,int z);
int main(){
int x,y,z,max,min;

	printf("Enter three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	max=maximum(x,y,z);
	min=minimum(x,y,z);
	printf("The maximum number is %d\n",max);
	printf("The minimum number is %d\n",min);

return 0;
}

maximum(int x,int y,int z){
	int max;
	if(x>y){
	max=x;
	}else{max=y;}

	if(max<z){
	max=z;
			}

return max;
} 

int minimum(int x,int y,int z){
	int min;
	if(x<y){
	min=y;
	}else{min=x;}
	if(min>z){
		min=z;
	}

return min;
}
