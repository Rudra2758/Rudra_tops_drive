// without argument with return type
#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("this is your sum of two number : %d",ans);	
}
int sum(){
	int num,num1;
	printf("Enter the value :");
	scanf("%d %d",&num ,&num1);
	return num+num1;
}
