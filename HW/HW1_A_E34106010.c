#include <stdio.h>
int main(){
int count,tmp,score,credit,average,tmp2,tmp3;
tmp=1;
tmp2=0;
tmp3=0;
FILE * out;
out = fopen("Transcript.dat","w"); 
	printf("Please enter the number of classes\n");
	scanf("%d",&count);
		while(tmp<=count){
		printf("Score%d  ",tmp);
		scanf("%d",&score);
			while(score>100||score<0){
				printf("Please enter the right value\n");
				printf("Score%d  ",tmp);
				scanf("%d",&score);
			}
			fprintf(out,"Score%d %d ",tmp,score);
		printf("Credit%d ",tmp);
		scanf("%d",&credit);
		fprintf(out,"Credit%d %d\n",tmp,credit);
		tmp3=tmp3+credit;
		tmp2=tmp2+score*credit;
		tmp=tmp+1;
		} 
average=tmp2/tmp3;
			if(average>=90){
				printf("GPA:A");
				fprintf(out,"Weighted average score GPA:A");
			}else if(average>=80){
				printf("GPA:B");
				fprintf(out,"Weighted average score GPA:B");
			}else if(average>=70){
				printf("GPA:C");
				fprintf(out,"Weighted average score GPA:C");
			}else if(average>=60){
				printf("GPA:D");
				fprintf(out,"Weighted average score GPA:D");
			}else { printf("GPA:F");
				fprintf(out,"Weighted average score GPA:F");
			} 
fclose(out);
return 0;
}
