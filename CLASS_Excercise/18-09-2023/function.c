//
#include<stdio.h>
main(){
	int a,b;
	printf("Enter the value here :");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	printf("this is the value %d",a+b);
}
