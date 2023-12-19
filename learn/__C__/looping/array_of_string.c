// write a programm for arry for string


#include<stdio.h>
main(){
	
	char city[5][20];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("input the name of city[%d] : ",i);
		scanf("%s",&city[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\tcity[%d] : %s ",i,city[i]);
	}
	
}
