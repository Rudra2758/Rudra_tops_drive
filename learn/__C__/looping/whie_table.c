#include<stdio.h>
main(){
	
	int i,n;
	
	
	printf("Enter the number to ptrint table : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t %d*%d=%d",n,i,n*i);
		
		i=i+1;
	}
}
