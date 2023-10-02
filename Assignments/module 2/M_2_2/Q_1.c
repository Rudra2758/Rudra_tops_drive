/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) */

#include<stdio.h>
#include<math.h>

int main(){
	float a,b,W,sum;
	int x,y;
	printf("Select the number for \n1.for adtion\n2.for substraction\n3.for multiplication\n4.for division\n5.for modulo\n");
	scanf("%f",&W);
	
	if(W==1){
		printf("Enter your both number for addition :");
		scanf("%f %f",&a,&b);
		sum=a+b;
		printf("Your addition value is : %f",sum);
	}else if(W==2){
		printf("Enter your both number for substraction :");
		scanf("%f %f",&a,&b);
		sum=a-b;
		printf("Your substraction  value is : %f",sum);
	}else if(W==3){
		printf("Enter your both number for multiplication :");
		scanf("%f %f",&a,&b);
		sum=a*b;
		printf("Your multiplication value is : %f",sum);
    }else if(W==4){
		printf("Enter your both number for division :");
		scanf("%f %f",&a,&b);
		sum=a/b;
		printf("Your division value is : %f",sum);
    }else if(W==5){
		printf("Enter your both number for modulo :");
		scanf("%f %f",&a,&b);
		sum=x%y;
		printf("Your modulo value is : %d",sum);
    }else {
    	printf("plese input correct details\n THANK YOU....!");
	}

}
