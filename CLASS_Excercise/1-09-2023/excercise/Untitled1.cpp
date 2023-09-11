#include<stdio.h>
main(){
	int x,y,z, max;
	printf("enter the number :");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y){
		if(x>z)
		{
			max=x;
		}
		else
		{
			max=z;
		}
	}
	else if (y>z){
		max=y;
	}
	else
	{
		max=z;
	}
	printf("maximum among the all three numbers=%d",max);
}
	
