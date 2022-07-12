#include <stdio.h>
int main(){
	int sum=0,count=0,grade=0;
	float avg;
	printf("Enter a grade (grade<0 to terminate)\n");
	scanf("%d",&grade);
		while(grade>=0){
			sum=sum+grade;
			count=count+1;
			printf("Enter a grade (grade<0 to terminate)\n");
			scanf("%d",&grade);
	}
	avg=(float)sum/count;
		if(count!=0){
		avg=(float)sum/count;
		printf("%d grades entered,AVG is %.3f\n",count,avg);}
	else{printf("No valid grade entered\n");
	}
	return 0;
} 
