/*to check if three numbers are equal or not*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("the three values as");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	printf("all three numbers are equal");
	else 
	printf("all are not equal");
	return 0;
}
