// WAP to findout maximum among all value


#include<stdio.h>

main(){
	
	int i;
	int size;
	int num[size];
	int max;
	
	
	printf("\n\n\t total number of vlaue  : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
		{
			printf("\n\n\t Value of num[%d] :",i);
			scanf("%d",&num[i]);
		}
		
		
	printf("------------------------------------------------------------");
	
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\tvalue of num[%d] : num[%d]",i,num[i]);
		
	}
	
	max=num[0];
	
	for(i=0;i<size;i++)
	{
		if
		(num[i]>max) 
		max=num[i];
		
	}
	
	printf("\n\n\tThe maximum number is : %d",max);
}
