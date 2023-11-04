/*to find nature of triangle*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	printf("the triangle is equilateral");
	else if(a==b&&b!=c ||a!=b&&b==c||a==c&&b!=c)
	printf("the triangle is isosceles");
	else
	printf("the triangle is scalene");
	return 0;
}

