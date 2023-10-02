#include<stdio.h>

int sun(int a,int b );


int main(){
	int a,b;
	printf("num 1 : \n");
	scanf("%d",&a);
	printf("num 2 : \n");
	scanf("%d",&b);
	
	int s = sum(a,b);
	printf("sum is = %d",s);
	
}

int sum(int x,int y){
return x % y ;
}


