#include <stdio.h>
int main(){
	
	printf("Enter GPA code\n");
	printf("A=4,B=3,C=2,D=1,F=0, -1 to end\n");
	int a,b,c,d,f;
	a=b=c=d=f=0;
	int temp;
	temp=0;
	while(temp!=-1){
		scanf("%d",&temp);
		switch(temp){
			case 4	:
				a++;
				break;
			case 3	:
				b++;
				break;
			case 2	:
				c++;
				break;
			case 1	:
				d++; 
				break;
			case 0	:
				f++;
				break;
			default	:
			printf("invalid GPA code\n");
				break; 
					}
}
printf("A=%d B=%d C=%d D=%d F=%d",a,b,c,d,f);






	return 0;
} 
