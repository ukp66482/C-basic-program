#include <stdio.h>
int main(){
int A[5];
int i=0;


//A[5]={0,1,2,3,4};

/*for(i=0;i<5;i++){
scanf("%d",&A[i]);
}

for(i=0;i<5;i++){
printf("A[%d]=%d\n",i,A[i]);
}*/

int c[5] = {2,5};

for(i=0;i<5;i++){
printf("C[%d]=%d\n",i,c[i]);
}

int d[5]={0}; 
for(i=0;i<5;i++){
printf("d[%d]=%d\n",i,d[i]);
}

int e[]={0,1,2,3,4};
for(i=0;i<5;i++){
printf("e[%d]=%d\n",i,e[i]);
} 

int f[5]={0};
f[3+1]=1;
for(i=0;i<5;i++){
printf("f[%d]=%d\n",i,f[i]);
}

}
