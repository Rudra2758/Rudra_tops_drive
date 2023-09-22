#include<stdio.h>
#include<math.h>
// write a programm for finding a compound intrest
int main(){
	float amount,m,monthly_intrest;
	printf("amount is\t");
	scanf("%f",&amount);
	
	printf("amount taken for month \t");
	scanf("%f",&m);
	
	printf("monthly intrest is \t");
	scanf("%f",&monthly_intrest);
	
	float k=monthly_intrest/m ,j=1+k;
	double R=pow(j,m);
	
	
	printf("total compounding intrest is: %f",amount*R);
	return 0;
}

