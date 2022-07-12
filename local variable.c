#include <stdio.h>
void calllocal(int a);
void uselocal(void);
void usestaticlocal(void);
void useglobal(void);

int a=111;

int main(){
	int a;
	a=7;
	printf("a= %d\n",a);
	{
	int a=3;
	printf("within {} a=%d\n",a);
		{
			int a=1;
			printf("within {{}} a=%d\n",a);
		}
	}
	
	printf("out of {{}}a= %d\n",a);
	calllocal(a);
	printf("after calllocal(a), in main() a=%d\n",a);

	uselocal();
	printf("after uselocal() a=%d\n",a);

	usestaticlocal();
	printf("after usestaticlocal() a=%d\n",a);
	usestaticlocal();
	printf("after second usestaticloacl() a=%d\n",a);

	useglobal();
	printf("after useglobal(),a=%d",a);

return 0;
} 

void calllocal(int a){
	printf("In calllocal(),a=%d\n",a);
	a*=3;
	printf("In calllocal(),a*=3,a=%d\n",a);
}

void uselocal(void){
	int a=11;
	printf("uselocal(),a=%d\n",a);
	a*=11;
	printf("uselocal(), a*=11,a=%d\n",a);

}

void usestaticlocal(void){
	static int a=2;
	printf("usestaticlocal(),a=%d\n",a);
	a*=13;
	printf("usestaticlocal(),a*=13,a=%d\n",a);

}

void useglobal(void){
printf("useglobal(),a=%d\n",a);
a--;
printf("useglobal(),a--,a=%d\n",a);

}
