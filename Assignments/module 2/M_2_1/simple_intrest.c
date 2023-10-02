// WAP to find simple interest 

#include<stdio.h>
int main(){
	int p,t;
	float r,si;
       printf("Input principle, Rate of interest(per month) & time(in terms of month) to find simple interest: \n");
       scanf("%d %f %d",&p,&r,&t);
       si=(p*r*t)/100;
       printf("\nSimple interest = %f",si);
       return 0;
}
