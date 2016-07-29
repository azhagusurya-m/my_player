#include <stdio.h>
#include<string.h>

void count_bracket(char str[])
{
	
	int i=0,j=strlen(str)-1,count_1=0,count_2=0;
      
	while(i<=j)
	{
	if(str[i]=='(')
	count_1++;
	if(str[i]==')')
	count_2++;

	i++;  	}
     	printf("%d",(count_1<=count_2)?count_1:count_2);
     	
     	
     
	
}
	int main(void) {
	
	char str[50];
    	scanf("%s",str);
	     count_bracket(str);

	// your code goes here
	return 0;
}
