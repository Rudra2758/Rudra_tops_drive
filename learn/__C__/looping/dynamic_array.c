// array

#include<stdio.h>

main(){
	
	int rollno;
	char name[30];
	int marks[5];
	int total;
	float per;
	int i;
	
	printf("\n\n\tStudent's roll number  : ");
	scanf("%d",&rollno);
	
	printf("\n\n\tInput the name : ");
	scanf("%s",&name);
	
	for(i=0;i<5;i++)
		{
			printf("\n\n\tInput the marks[%d] :",i);
			scanf("\n%d",&marks[i]);
		}
		
	printf("\n\n\t Roll number : %d",rollno);
	printf("\n\n\t Name : %s",name);
	
	
	for(i=0;i<5;i++)
		{
			printf("\n\n\t Marks of [%d]  : [%d]",i,marks[i]);
			
			total=total+marks[i];
		}
		
	printf("\n\n\tTotal of marks : %d",total);
	
	printf("\n\n\tpercentage : %.2f ",per=total/5);
}
