#include<stdio.h>
int count=0;
int divide(int n,int n2)
{
	if(n==0)
	return count;
   count=divide(n/n2,n2);
	  return count+1;
}
int main()
{
	int num1,num2,i=0;
	scanf("%d%d",&num1,&num2);
	if(num1<0&&num2<0)
      {
      	num1=abs(num1);
        num2=abs(num2);
        printf("-");
      }
          printf("%d",divide(num1,num2));
     return 0;
}
