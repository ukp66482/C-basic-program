#include <stdio.h>
int main(){
int n=0;
int sum=0;
int i=2;
	for(i=2;i<=100;i++)
	{if(i%2==0)
		{n++;
		sum=sum+i;}
	}
	
		printf("number of even=%d\n",n);
		printf("sum=%d",sum);
	
	return 0;
} 
