/*to calculate annual income of a person*/
#include<stdio.h>
int main()
{
	int b,g,h,d,t,r;
	printf("basic salary,region:");
	scanf("%d %d",&b,&r);
	d=(b*48)/100;
	t=(b*8)/100;
	printf("%d %d",d,t);
	if(r==1)
	h=(b*27)/100;
	else if(r==2)
	h=(b*24)/100;
	else if(r==3)
	h=(b*16)/100;
	else
	h=(b*12)/100;
	g=b+h+d+t;
	printf("gross salary= %d",g);
	return 0;
}
