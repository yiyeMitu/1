#include"stdio.h"
main(){
	int i,j;
	i=0;
	while(i++<=9)
	{
		j=i;
		while(j++<=9)
		{printf(" ");
		
		}
		j=1;printf("/");
		while(j++<=i)
		{printf("*");
		
		}
		printf("\n");}
} 
