#include<stdio.h>
int main(){
	char marks;
	printf("ENter the marks \n :");
	scanf("%d",&marks);
	
	if(marks>30 && marks<=100){
		printf("you are passed \n");
	}else{
		printf("you are failed");
	}
}
