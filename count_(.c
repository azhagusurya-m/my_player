#include <stdio.h>
#include<string.h>

void count_bracket(char str[])
{
	
	int i=0,j=strlen(str)-1,count=0;
      
	while(i<=j)
	{
	if(str[i]>='(')
	count++;
	if(str[j]==')')
	count--;
	
	i++;
	j--;
     	}
     	
     	printf("%d",strlen(str)-count);
	
}
	int main(void) {
	
	char str[50];
    	scanf("%s",str);
	     count_bracket(str);

	// your code goes here
	return 0;
}
