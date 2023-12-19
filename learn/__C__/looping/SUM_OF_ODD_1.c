// WAP TO SUM OF EVEN NUMBER BETWEEN 50 TO 100



#include<stdio.h>
main(){
	
	int i;
	int sum=0;
	
	for(i=51;i<=100;i=i+2)
	printf("\n\n\t %d",i);
	
	
		for(i=51;i<=100;i=i+2)
    	sum=sum+i;

	printf("\n\n\tThe sum is : %d",sum);
	return 0;
}
