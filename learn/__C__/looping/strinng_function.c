/* STRING FUNCTIONS---string manipulation

1)) strlen(str)--- find the length of string
2)) strcpy(str)--- to copy the one string to another[ strcpy(destination,sourse]
3)) strrev(str)--- to reverse the string
4)) strupr(str)--- To convert string inupper latter
5)) strlwr(str)--- To convert the string in lower atter
6)) strcmp(str)--- To compare two string
7)) stricmp(str)--- To compare two string with ignoring the case latter
8)) strcat(str)--- to concatenate(join) the any string
*/


#include<stdio.h>
main(){
	
	char str[30],str1[30],str2[30];
	int len;
	
	printf("input the string : ");
	gets(str);
	
	printf("---------------------------------------------------------------------------");
	
/*	len=strlen(str);
	printf("\n\n\t The length of given string is : %d",len);
	
	
	printf("\n\n---------------------------------------------------------------------------");
	
	strcpy(str1,str);
	printf("\n\n\t Aftre the string copy : %s",str1);  //  %s is for string 
	
	printf("\n\n---------------------------------------------------------------------------"); 
	
	printf("\n\n\tThe original string is : %s",str);
	printf("\n\tString after reverse is : %s",strrev(str));   
	
	printf("\n\n---------------------------------------------------------------------------"); 
	
	printf("\n\n\tThe original string is : %s",str);
	printf("\n\n\t Uper string conversion is : %s",strupr(str));
	printf("\n\n\t lower string conversion is : %s",strlwr(str));  
	
	printf("\n\n---------------------------------------------------------------------------");  
	
	printf("\n\n\t input the string for compare :");
	gets(str2);
	
	if(stricmp(str,str2)==0)
		printf("\n\tstring are equal ");
		
		else
		printf("\n\n\tstring are not equal "); */
		
		
	printf("\n\n---------------------------------------------------------------------------");
	
	printf("\n\n\t input the string for concate :");
	gets(str2);
	printf("\n\n\t after the concate the string : %s",strcat(str,str2));
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
