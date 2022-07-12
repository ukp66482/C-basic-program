#include <stdio.h>
int main(){
	int grade,count,sum;
	float average;
	count=1;
	sum=0;
	while(count<=4){
	printf("Enter your grade\n");
	scanf("%d",&grade);
	count=count+1;
	sum=sum+grade;
	}
	printf("SUM is %d\n",sum);
	average=(float)sum/(count-1);
	printf("The averge is %f\n",average);
	return 0;
}
