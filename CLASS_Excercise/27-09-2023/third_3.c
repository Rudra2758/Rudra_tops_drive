#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("NAME :");
	gets(name);
	printf("name1");
	gets(name1);
	printf("\n 1st %s :",strlwr(name));
	printf(" 2nd %s ",strupr(name1));
	
}
