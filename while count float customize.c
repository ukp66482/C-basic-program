#include <stdio.h>
int main(){
	int number,grade,count,sum;
	float average;
	count=1;
	sum=0;
	printf("Enter number of subject\n");
	scanf("%d",&number);
	while(count<=number){
	printf("Enter your grade %d\n",count);
	scanf("%d",&grade);
	count=count+1;
	sum=sum+grade;
	}
	printf("SUM is %d\n",sum);
	average=(float)sum/(count-1);
	printf("The averge is %f\n",average);
	return 0;
}
