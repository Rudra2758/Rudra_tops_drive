#include<stdio.h>
void main()
{
	int i,even=0,odd=0,even_total,odd_total,num;
	for(i=1;i<=10;i++)
	{
		printf("enter the number :");
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
			even_total+=num;
		}else{
			odd++;
			odd_total+=num;
		}
	}
	printf("this is total of even %d\n",even_total);
	printf("this is total of odd %d \n",odd_total);
	printf("total number even %d \n",even);
	printf("total number odd %d \n",odd);
}
