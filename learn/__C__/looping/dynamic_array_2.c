//  dynamically get array value from user


#include<stdio.h>

main(){
	int i;
	int rollno;
	char name[30];
	int marks[5];
	int total=0;
	float per;
	int size;
	
	
	printf("\n\n\t total subject  : ");
	scanf("%d",&size);
	
	printf("\n\n\tStudent's roll number  : ");
	scanf("%d",&rollno);
	
	printf("\n\n\tInput the name : ");
	scanf("%s",&name);
	
	for(i=0;i<size;i++)
		{
			printf("\n\n\tInput the marks[%d] :",i);
			scanf("\n%d",&marks[i]);
		}
		
	printf("\n\n\t Roll number : %d",rollno);
	printf("\n\n\t Name : %s",name);
	
	
	for(i=0;i<size;i++)
		{
			printf("\n\n\t Marks of [%d]  : [%d]",i,marks[i]);
			
			total=total+marks[i];
		}
		
	printf("\n\n\tTotal of marks : %d",total);
	
	printf("\n\n\tpercentage : %.2f ",per=total/size);
}
