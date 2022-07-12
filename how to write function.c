#include <stdio.h>
//declare function
int func(int i);//	function prototype intput int,return int

int main(){
int x,y;
	scanf("%d",&x);
	y=func(x);//function name "func",input x,return y 
	printf("%d",y);



return 0;
} 

//function======================================================
func(int i){
return i*i;
}
