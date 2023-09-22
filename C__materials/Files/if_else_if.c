// if else if statement

/* 

SYNTAX
 
 if(condition 1)
 {
 do something iff true
 }
 else if(condition 2)
 {
 do something if 1st false & 2nd true
 }
 */
 
 
 
 
 

#include<stdio.h>
int main(){
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	
	if(age<18){
		printf(" notadult \n");
	}
	else if(18<age)
	{
			printf("They are  don \n");
			}
	else if(30<age){
		printf("they are buddha");
		}
		
	else{
			printf("kai nai");
		}
		
		return 0;
}
