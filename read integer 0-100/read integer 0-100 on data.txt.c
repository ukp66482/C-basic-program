#include <stdio.h>
#define NUM 100

double calcmean(int data[]);
double calcmedian(int data[]);
void bubblesort(int DATA[]);
int calcmode(int data[],int histogram[]);

int main(){

	int data[NUM]={0};
	double mean;
	double median;
	int histogram[10]={0};
	int mode,i;
	
	FILE *Input;
	Input=fopen("Data.txt","r");
		for(i=0;i<NUM;i++)
			fscanf(Input,"%d",&data[i]);
	fclose(Input);
	
	for(i=0;i<NUM;i++){
		printf("%d ",data[i]);
		if(i%10==9){
		printf("\n");
		}
	}
	mean=calcmean(data);
		printf("Mean=%.3f\n",mean);
	median=calcmedian(data);
		printf("Median=%.3f\n",median);
	mode=calcmode(data,histogram);	
		printf("Mode=%d\n",mode);
	
return 0;
}

double calcmean(int data[]){
	double avg;
	int sum,i;
	sum=0;
	for(i=0;i<NUM;i++){
	sum=sum+data[i];
	}
	avg=(double)sum/NUM;
	return avg;
}

int calcmode(int data[],int histogram[]){
	int mode;
	int i,max;
	
	for(i=0;i<NUM;i++)
		histogram[data[i]]++;
	max=histogram[0];
	mode=0;
	
		for(i=0;i<10;i++){
			if(histogram[i]>max){
			max=histogram[i];
			mode=i;
			}
		}
	return mode;
}

double calcmedian(int data[]){
double median;
int i;
printf("Before sorting\n");
for(i=0;i<NUM;i++){
		printf("%d ",data[i]);
		if(i%10==9){
		printf("\n");
		}
	}
bubblesort(data);
	
printf("After sorting\n");
for(i=0;i<NUM;i++){
		printf("%d ",data[i]);
		if(i%10==9){
		printf("\n");
		}
	}
		if(NUM%2==1){
			median=data[NUM/2];
		}else{
			median=((double)data[NUM/2]+(double)data[NUM/2-1])/2;
		}
return median;
}

void bubblesort(int data[]){
int i,j,temp;
for(i=0;i<NUM-1;i++){
	for(j=0;j<NUM-1;j++){
	if(data[j]>data[j+1]){
		temp=data[j];
		data[j]=data[j+1];
		data[j+1]=temp;
						}
}
}
}

