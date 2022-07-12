#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wager();

int main(){

int i,point1,point2,point3,sum;
double ratio,win;
win=0;
srand(time(NULL));

	for(i=1;i<=1000;i++){
	
	point1=rand()%6+1;
	point2=rand()%6+1;
	point3=rand()%6+1;
	sum=point1+point2+point3;
	
	if(point1==point2==point3){
	continue;}
	
	switch(wager()){
	case 1:
	
	if(sum%2==1){
	win++;
	}break;	
	
	case 2:
	
	if(sum%2==0){
	win++;
	}break;
	}
}
		ratio=((double)win/1000)*100;
		printf("win rate= %.2lf%%",ratio);

return 0;
}

int wager(){
	int bet;
	bet=(rand()%2)+1;
	return bet;
}
