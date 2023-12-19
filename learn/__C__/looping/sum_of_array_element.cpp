// WAP to sum of array eleent


#include<stdio.h>

main(){
	
	int i;
	int n[5];
	int sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tAdd a value[%d] : ",i);
		scanf("%d",&n[i]);
		
	}
	
	printf("--------------------------------------------------------------");
	
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tvalue of [%d] is : %d",i,n[i]);
		
		sum=sum+n[i];
		
	}
	
	printf("\n\n\tsum is %d",sum);

	}
