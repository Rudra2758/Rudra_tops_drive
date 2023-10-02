#include<stdio.h>
# define PI 3.141414

int main(){
	float radius,width,length,base,height,areaC,areaR,areaT;
	printf("For AREA of cicle type the radius : \n");
	scanf("%f",&radius);
	areaC = PI * radius * radius;
	printf("the area of circle is = %.2f cm \n\n\n",areaC);
	
	printf("for area of rectangle type length & width of rectangle : ");
	scanf("%f %f",&length,&width);
	areaR = length*width;
	printf("area of rectangle = \t%.3fcm\n",areaR);
	
	
	printf("fro area of trinale type baselength & hieght of triangle :");
	scanf("%f %f",&base,&height);
	areaT=  0.5*base*height;
	printf("area of triangle is : %.4f cm",areaT);
	
	
	
	return 0;
}

