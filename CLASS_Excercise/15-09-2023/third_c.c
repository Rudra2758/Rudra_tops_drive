// Without argument without return type
#include<stdio.h>
void fun();  // Pre define function
void main()
{
	fun();  // calling function
}

void fun () // Declaration function
{
	int a,b; //Function body
	printf("Enter the values here :");
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
}

