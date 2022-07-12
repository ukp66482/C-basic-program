#include <stdio.h>

int maximum(int x,int y,int z);

int main(){
int x,y,z,max;

	printf("Enter three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	max=maximum(x,y,z);
	printf("The maximum number is %d",max);


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
