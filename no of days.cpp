/*to print number of days in a month*/
#include<stdio.h>
int main ()
{
	int a,b;
	printf("the value of month as a\n");
	printf("the value of year as b:");
	scanf("%d%d",&a,&b);
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		printf("the number of days as 31");
	}
	else if (a==4||a==6||a==9||a==11)
	{
		printf("the number of days as 30");
	}
	else 
	       { 
	       if(b%4==0||(b/100==0&&b/400==0))
	       printf("the number of days as 29");
	       else
	       printf("the number of days as 28");
		   }
	return 0;
		   
}
