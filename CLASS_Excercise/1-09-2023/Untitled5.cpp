#include<stdio.h>
main(){
	int marks;
	printf("enter the number");
	scanf("%d",&number);
	if(number>0 && number<100)
	{
	if(number>=90 && number<100)
{
	printf("A grade");
}else if(number>=70 && number<90){
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
}
