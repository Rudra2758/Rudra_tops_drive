//WHILE loop
/*syntax
         while(condition)
         { statement 
         }
         updation
         
         
         #include<stdio.h>
         int main(){
		 
         int i=1;
         
         while (i<=5) {
         	printf("tarun\n");
         //	printf("\n");
        
         	i++;
		 }
		 return 0;
	     }
     
	  */   
// print the number from 0 to n(n is igvne by user)

#include<stdio.h>
int main(){
	int i=0,n;
	printf("enter the number :");
	scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		i++;
	}	
	return 0;
}	     
