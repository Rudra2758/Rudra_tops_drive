//WAP for 2d array


#include<stdio.h>
main(){
	
	
	int arr[3][3];
	int i,j;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf( "Enter the input arr[%d][%d] : ",i,j);
			scanf("%d",&
			arr[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
			
			
		}
		//printf("\n");
	}
	
	
}
