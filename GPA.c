#include <stdio.h>
int main(){
int i;
printf("Please enter your grade\n");
scanf("%d",&i);
	if(i>=90){
		printf("A\n");
	}else if(i>=80){
		printf("B\n");
	}else if(i>=70){
		printf("C\n");
	}else if(i>=60){
		printf("D\n");
	}else if(i<60){
		printf("F\n");
	}
    if(i>=60){
    	printf("PASSED");
	}else {
		printf("FAILED");
	}

return 0;
}
