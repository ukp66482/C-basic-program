#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//include library

//#define win 1
//#define lose 0
//#define continue 2
//define variables
enum Status{LOSE,WIN,CONT};

int roll2dice();
//declare function


int main(){
enum Status status;
int sum,point;
//int status;			//win=1 lose=0 continue=2
srand(time(NULL));

	
	sum=roll2dice();
 	printf("round 1: dice sum=%d\n",sum);

	switch(sum){
		
		case 7:
		case 11:
		status=WIN;
		break;
		
		case 2:
		case 3:
		case 12:
		status=LOSE;
		break;
		
		default:
		status =CONT;
		point =sum;
		printf("player point = %d\n",sum);
		break; 
		
	}
	
	while(status==CONT){
	
	sum=roll2dice();
	printf("dice sum = %d\n",sum);
	
		if(sum==7){
		status=LOSE;
		}else if(point==sum){
		status=WIN;
		}else{
		status=CONT;
		}
	}

if(status==WIN){
	printf("player win");
}else{
	printf("player lose");
}



return 0;
}

int roll2dice(){
	int die1,die2,total;
	die1=rand()%6+1;
	die2=rand()%6+1;
	total=die1+die2;
}
