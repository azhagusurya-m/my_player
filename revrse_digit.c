#include <stdio.h>

void reverse(int num)
{
	if(num==0)
	return ;
	 printf("%d",num%10);

	reverse(num/10);
}
int main(void) {
	int num;
	scanf("%d",&num);
	    if(num>0)
	       reverse(num);
	          else if(num<0)
	            {    
	         	printf("-");
              	reverse(num*-1);
	            }
            	else
             	 printf("0");
	
	// your code goes here
	return 0;
}
