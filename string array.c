#include <stdio.h>
int main(){
int i;
char str[6]="hello";// implicit have 6th character '\0',end of string

for(i=0;i<5;i++){
	printf("%c",str[i]);
}
printf("\n");

char Str[20];
printf("enter a short word\n");

scanf("%s",Str); //important no & sign!!!!! 
Str[10]='z';
printf("you enter \"%s\"\n",Str);



for(i=0;i<20;i++){
printf("%c %d\n",Str[i],Str[i]);
}
return 0;
} 
