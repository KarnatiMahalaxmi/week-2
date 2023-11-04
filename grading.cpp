/*to find percentage and grade of a student*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("5 subject marks:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("the percentge of student is %d %",f);
	if(f>=90)
	printf("grade A");
	else if(f>=80)
	printf("grade B");
	else if(f>=70)
	printf("grade C");
	else if(f>=60)
	printf("grade D");
	else if(f>=40)
	printf("grade E");
	else
	printf("grade F");
	return 0;
}
