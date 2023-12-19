/*WAP to find out 
1))odd even numberr from array
2)) sum of odd number
3)) sum of even number



*/

#include<stdio.h>
main(){


	int i;
	int n[5];
	
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tAdd a value[%d] : ",i);
		scanf("%d",&n[i]);
		
		if(i%2==1)
		{
			printf("Even number");
			
		}
		else{
			printf("Odd number");
		}
		
	}
	
	printf("--------------------------------------------------------------");
	
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tvalue of [%d] is : %d",i,n[i]);
		
		
		
	}
	
	
}
