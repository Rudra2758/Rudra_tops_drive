/*WAP to take range from the user & findout 

    1)) sum of even
    2)) sum of odd
    3)) how many odd
    4)) how many even
    */
    
#include<stdio.h>
main(){
	
	int range;
	int i,sum,j;
	
	
	printf("\n\n\t Enter the range of number :\t\t");
	scanf("\n\n\t %d",&range);
	
	
	//for odd numbers
     	i=1,sum=0,j=0;
     	
     	
     	while(i<=range)
     	{
     		
     		printf("\n\t The odd number is : \t %d",i);
     		  j=j+1;
     		
			 sum=i+sum;
     		
     		
     		i=i+2;
     		
		 }
		 printf("\n\t The sum off odd number is : %d\n",sum);
		 printf("\n\t The total number of odd number is : \t%d",j);
	// sum of even number
	
	i=2;
	sum=0;
	
	while(i<=range)
	{
		
		printf("\n\tThe even number is : %d\n\t",i);
		sum=i+sum;
		printf("The sum of even number is : %d\n",sum);
		
		i=i+2;
	}
	
	     	 
	
	
	
}
