#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("name");
	gets(name);
	strcpy(name1,name);
	printf("copy : %s " ,name1);
	return 0;
}
