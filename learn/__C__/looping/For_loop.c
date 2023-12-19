/* For loop----WAP to take range from the user & findout the squre of all 
*/


#include<stdio.h>

main(){
	
	int i,r,s,sum=0;
	  
	  
	  printf("RANGE : ");
	  scanf("%d",&r);
	  
	  
	  printf("The squre is :\t");
	
	
	for(i=1;i<=r;i++)
	{
		
		
		printf(" %d,", s=i*i);
		
		sum=s+sum;
	}
	
	
	printf("This is sum : \t%d",sum);
	
}
