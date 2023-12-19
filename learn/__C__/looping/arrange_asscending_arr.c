// WAP to arrange number in asscending forms

#include<stdio.h>
main(){
	
	int size;
	int i,j;
	int value[50];
	int tem;
	
	printf(" The size of array is(<50) : ");
	scanf("%d",&size);
	
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t The value is : value[%d] ",i);
		scanf("%d",&value[i]);
	}
	
	
	printf("-------------------------------------------------------------------------");
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\tThe value of %d is : value[%d]",i,value[i]);
		
	}
	
	printf("\n\n-------------------------------------------------------------------------");
	
	
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(value[i]>value[j])
			{
				tem=value[i];
				value[i]=value[j];
				value[j]=tem;
				
				
			}
		}
	}
	printf("\n\n\tafter sorting--------------------------------------------------");
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t value[%d] : %d",i,value[i]);
	}
}
