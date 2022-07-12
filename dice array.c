#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_DATA 100

int main(){
srand(time(NULL));
int i,j=0;
int dice[N_DATA]; 
int stat[7]={0};

for(i=0;i<N_DATA;i++){
dice[i+1]=rand()%6+1;
printf("%d ",dice[i+1]);
	
	if(i%10==9){
	printf("\n");
	}
}

for(i=0;i<N_DATA;i++){
stat[dice[i+1]]++;
stat[0]++;
} 

printf("\n");

for(i=0;i<7;i++){
printf("stat[%d]=%d\n",i,stat[i]);
}

printf("\n");

for(i=1;i<=6;i++){
	printf("face %d:",i);
	for(j=1;j<=stat[i];j++){
	printf("*");
	}
	printf("\n");
}



return 0;
}

