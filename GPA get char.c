#include <stdio.h>
int main(){
	
	printf("Enter GPA code,EOF(Ctrl+Z)\n");
	int a,b,c,d,f;
	a=b=c=d=f=0;
	char GPA;
	GPA=getchar();
	while(GPA!=EOF){
		switch(GPA){
			case 'A'	:
			case 'a'	:
				a++;
				break;
			case 'B'	:
			case 'b'	:
				b++;
				break;
			case 'C'	:
			case 'c'	:
				c++;
				break;
			case 'D'	:
			case 'd'	:
				d++;
				break;
			case 'F'	:
			case 'f'	:
				f++;
				break;
			case '\n'	:
			case ' '	:
			case '	'	:
				break;
			default	:
			printf("invalid GPA code:%c\n",GPA);
				break; 
					}
	GPA=getchar();
}

//printf("A=%d B=%d C=%d D=%d F=%d\n",a,b,c,d,f);
printf("%-8s%-15s","GPA","the number of people\n");
printf("%-8s%-15d\n","A",a);
printf("%-8s%-15d\n","B",b);
printf("%-8s%-15d\n","C",c);
printf("%-8s%-15d\n","D",d);
printf("%-8s%-15d\n","F",f);





	return 0;
} 
