// && || =!
//logical operaters

#include<stdio.h>
main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=90 && marks<100)
{
	printf("A grade");
}else if(marks>=70 && marks<90){
	printf("b grade");
}else if (marks>=50 && marks<70)
{
	printf("C garde");
}else if (marks>35 && marks<50){
	printf("just pass");
}else{
	printf("fail");
}
}
