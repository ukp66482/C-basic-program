#include <stdio.h>
int main(){
int counter=1,pass=0,fail=0;
int temp;
	while(counter<=10){
	scanf("%d",&temp); 
	if(temp==1){
		pass=pass+1;
 	}else if(temp==2){
		fail=fail+1;
	}else{printf("Invalid result, please re-enter\n");
	//counter=counter-1;	
	}
	if(temp==1||temp==2)
	counter=counter+1;
}
printf("passed:%d failed:%d",pass,fail);


	return 0;
}
